#include <iostream>
#include <fstream>
#include <string>
#include <experimental\filesystem>

void copy_file(const std::experimental::filesystem::path& source, const std::experimental::filesystem::path& dest)
{
    std::cout << "Copying " << source << " to " << dest << " ..." << std::endl;

    if (std::experimental::filesystem::exists(dest))
    {
        std::cout << "File already exists. Do you want to overwrite? (y/n): ";
        char choice;
        std::cin >> choice;
        if (choice != 'y')
        {
            return;
        }
    }

    std::ifstream input{source, std::ios::binary};
    if (!input)
    {
        std::cout << "Source file not found" << std::endl;
        return;
    }

    std::experimental::filesystem::create_directories(dest.parent_path());

    std::ofstream output{dest, std::ios::binary};
    if (!output)
    {
        std::cout << "Could not create output file" << std::endl;
        return;
    }

    // Determine the size of the input file
    input.seekg(0, std::ios::end);
    std::streampos size = input.tellg();
    input.seekg(0, std::ios::beg);

    // Read and write the contents of the input file
    char* buffer = new char[size];
    input.read(buffer, size);
    if (!input)
    {
        std::cout << "Error reading input file" << std::endl;
        return;
    }
    output.write(buffer, size);
    if (!output)
    {
        std::cout << "Error writing output file" << std::endl;
        return;
    }

    input.close();
    output.close();
    delete[] buffer;

    std::cout << "File copied successfully" << std::endl;
}

void copy_directory(const std::experimental::filesystem::path& source, const std::experimental::filesystem::path& dest)
{
    if (!std::experimental::filesystem::exists(dest))
    {
        std::experimental::filesystem::create_directory(dest);
    }

    for (const auto& entry : std::experimental::filesystem::directory_iterator(source))
    {
        const auto& path = entry.path();
        const auto& dest_path = dest / path.filename();

        if (std::experimental::filesystem::is_directory(path))
        {
            copy_directory(path, dest_path);
        }
        else
        {
            copy_file(path, dest_path);
        }
    }
}

int main(int argc, char** argv)
{
    if (argc < 3)
    {
        std::cout << "Usage: copyutil <source> <destination>" << std::endl;
        return -1;
    }

    const std::experimental::filesystem::path source{ argv[1] };
    const std::experimental::filesystem::path dest{ argv[2] };

    if (std::experimental::filesystem::is_directory(source))
    {
        copy_directory(source, dest);
    }
    else
    {
        copy_file(source, dest);
    }

    return 0;
}

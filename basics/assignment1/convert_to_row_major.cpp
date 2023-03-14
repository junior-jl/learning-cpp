// Problem 4
// Write a function for the matrix which converts it into row-major order. The matrix must be of variable rows and columns input by the user (hint: use 2d pointers). The result returned by the function should be a single array.


#include <iostream>

using namespace std;

int* convertToRowMajor(int** matrix, int rows, int cols);

int main() 
{

    int rows, cols;
    cout << "Number of rows: ";
    cin >> rows;
    // Allocating memory for an array of pointers to int and assigning it to the double pointer matrix
    int** matrix = new int*[rows];
    cout << "Number of columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++) 
    {
        // matrix = matrix[0], a pointer to the first element of the array of pointers
        // each element (a pointer to an int) now points to a space for an array of ints (with length cols)
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) 
        {
            cout << "Element a_"<< i << j << ": ";
            cin >> matrix[i][j];
        }
    }

    int* new_matrix = convertToRowMajor(matrix, rows, cols);

    cout << "Original matrix: " << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "New matrix: ";
    for (int i = 0; i < (rows * cols); i++) 
    {
        cout << new_matrix[i] << " ";
    }

    delete[] new_matrix;
    for (int i = 0; i < rows; i++) 
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

int* convertToRowMajor(int** matrix, int rows, int cols) 
{
    int* new_matrix = new int[rows * cols];
    int k = 0;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            new_matrix[k++] = matrix[i][j];
        }
    }
    return new_matrix;
}
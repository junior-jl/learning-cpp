#include <cmath>
#include <iostream>

#define M 5
#define POINTS 10
using namespace std;
// Random walk structure

struct rwalk
{
    double starting_point[2];
    double end_point[2];
    double distance;
};

struct path
{
    int num_of_walks = M;
    rwalk walks[M];
};

// Generates random angle
double generate_angle()
{
    double degrees = rand() % 359;
    return (degrees * M_PI) / 180;
}

double generate_length()
{
    return rand() % 10 + 1;
}

// Generates a 'random walk' starting at origin (x0, y0)
rwalk generate_rwalk(double starting_point[], int points)
{
    rwalk w1;
    w1.starting_point[0] = starting_point[0];
    w1.starting_point[1] = starting_point[1];
    w1.end_point[0] = w1.starting_point[0];
    w1.end_point[1] = w1.starting_point[1];
    for (int i = 0; i < points; i++)
    {
        double angle = generate_angle();
        double length = generate_length();
        cout << "Ângulo: " << angle << "| cos angle = " << cos(angle) << "| sen angle = " << sin(angle) << endl;
        cout << "Comprimento: " << length << endl;
        w1.end_point[0] += length * cos(angle);
        cout << "x" << i + 1 << " = " << w1.end_point[0] << endl;
        w1.end_point[1] += length * sin(angle);
        cout << "y" << i + 1 << " = " << w1.end_point[1] << endl;

    }
    w1.distance = sqrt(pow(w1.end_point[0] - w1.starting_point[0], 2) + pow(w1.end_point[1] - w1.starting_point[1], 2));
    return w1;
}

// Generate M walks 

path generate_multiple_rwalks(double starting_point[], int walks)
{
    path random_walks;
    double start[2];
    for (int i = 0; i < walks; i++)
    {
        if (i == 0)
        {
            start[0] = starting_point[0];
            start[1] = starting_point[1];
        }
        else
        {
            start[0] = random_walks.walks[i - 1].end_point[0];
            start[1] = random_walks.walks[i - 1].end_point[1];
        }
        random_walks.walks[i] = generate_rwalk(start, POINTS);
    }
    return random_walks;
}

void print_rwalk(rwalk w)
{
    cout << "Starting points | x = " << w.starting_point[0] << " y = " << w.starting_point[1] << endl;
    cout << "Ending points | x = " << w.end_point[0] << " y = " << w.end_point[1] << endl;
    cout << "Distance = " << w.distance << endl;
}

void print_path(path p)
{
    for (int i = 0; i < p.num_of_walks; i++)
    {
        cout << "*-----------------------------*" << endl;
        cout << "WALK #" << i + 1 << endl; 
        print_rwalk(p.walks[i]);
    }
}

void sort_distances(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void calculate_data(path p)
{
    double distances[p.num_of_walks];
    double mean = 0;
    for (int i = 0; i < p.num_of_walks; i++)
    {
        distances[i] = p.walks[i].distance;
        mean += distances[i] / p.num_of_walks;
    }
    sort_distances(distances, p.num_of_walks);
    cout << "Shortest path = " << distances[0] << endl;
    cout << "Longest path = " << distances[p.num_of_walks - 1] << endl;
    double median = (p.num_of_walks % 2 == 0) ? ((distances[(p.num_of_walks / 2 - 1)] + distances[p.num_of_walks / 2]) / 2) : distances[p.num_of_walks / 2]; 
    cout << "Median path = " << median << endl;
    cout << "Mean = " << mean << endl;
    

}
int main()
{
    double origin[2] = {0, 0};
    path p = generate_multiple_rwalks(origin, M);
    print_path(p);
    calculate_data(p);
    

    return 0;
}
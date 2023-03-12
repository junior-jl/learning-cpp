/*
Problem-1 
Background:
Simpson University's president, Homer Simpson, has spent so much time doing "random walks" because of his high consumption of Duff Beer products, that he figures he can save a lot of time by having you program the random walk for him! Further, he won't have to waste precious "couch time" on his feet.
Specifications: 
Your program is to produce what is known as "random walks". To clarify, imagine you start at a base point (if you are mathematically inclined, you could call it the origin) and move some random distance in some random direction (in a straight line) to a new point (x1, y1). When you get to this point, you again move some random distance in some random direction to another new point, say (x2, y2). Repeating this procedure N times creates a "random walk". You end up at the point (xN, yN). If you were Homer, at this point you might fall down and sleep it off, possibly losing your wallet, watch, dignity, and some saliva. Thus, it is a good idea to remember where you landed.
You are to generate M of these walks, keeping track of the final points in an array for later reference. Homer figures he might have to return to the point in the gutter where he slept last night in order to look for his wallet, watch, dignity, whatever. After generating this set of random walks, you will report (output) the average distance from the starting point to the ending points of the walks. 
To do this, of course, you will calculate the distances and average them. You will also report the shortest, longest, and median walk distance. (The median of a data set is the point above which half the data lie and below which half the data lie. If the size of the data set is odd, then the median is a data point. If the size of the data set is even, then the median is the average of the middle two data points.) In order for you to find the median, you will have to sort the array of points (increasing order) by distance.
It needn't be said at this point, but I will: you will use functions in this assignment fully. You now decide how to break up the program into functions.
Special Stuff: 
So, you will use the rand() function to generate two things for each segment of a walk: the length of the walk (before another turn) and the angle to describe the direction of the walk. For this assignment, use the positive angle counterclockwise from the positive x-axis to determine the direction of the walk segment. So, generate a random number between 0 and 359 to represent the degree angle. Then, you will have to convert that to radians. Why? Because in order to determine the ending point, you will use the sin and cos functions from <cmath> (also to be included). These functions take radian arguments and return doubles. You can figure out the mathematics (trigonometry).
You will notice that there needn't be any user input for this program!

*/

#include <cmath>
#include <iostream>


const int M = 5;
const int POINTS = 10;
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
        for (int j = 0; j < i; j++)
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
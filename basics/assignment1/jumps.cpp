/*
Problem-2 
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].
Each element nums[i] represents the maximum length of a forward jump from the index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:
 0 <= j <= nums[i] 
 i + j < n
Return the minimum number of jumps to reach nums[n – 1].
Example-1:

Input: nums = [2,3,1,1,4]
Output: 2


Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
*/

#include <iostream>

using namespace std;

int jumps(int arr[], int size)
{
    // longest -> furthest index which can be reached (from the current index) with the current jumps
    // end -> furthest index that can be reached with the current jumps
    int longest = 0, end = 0, jumps = 0;
    for (int i = 0; i < size; i++)
    {
        longest = max(longest, i + arr[i]);
        if (longest >= size - 1)
        {
            jumps++;
            break;
        }
        if (i == end)
        {
            end = longest;
            jumps++;
        }
    }
    return jumps;
}

int main()
{
    int arr[] = {5, 3, 1, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min_jumps = jumps(arr, size);
    cout << "Minimum number of jumps to reach the end: " << min_jumps << endl;
    
    return 0;
}

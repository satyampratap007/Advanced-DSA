// 2016. Maximum Difference Between Increasing Elements
// Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j]
// (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].
// Return the maximum difference. If no such i and j exists, return -1.
/*Test cases:
arr[] = {2,3,10,6,4,8,1}
op: 8

arr[] = {7,9,5,6,3,2}
op: 2

arr[] = {10,20,30}
op: 20

arr[] = {30,10,8,2}
op: -1

*/


#include <iostream>
#include <cmath>
using namespace std;

// Brute force - O(n^2)
// int max_diff = INT32_MIN;
// int maxDiff(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j{i+1}; j < n;++j)
//         {
            // if ((arr[j] - arr[i]) > max_diff)
            // {
            //     max_diff = arr[j] - arr[i];
            // }
            // or
            // max_diff = max(arr[j] - arr[i], max_diff);
//         }
//     }
//     return max_diff;
// }

// Optimized Soln
// time - O(n)

// Approach - I have to track the min_Value across the array and secondly,
// I have to find the max of {(max. diff. - current element) and minimum no so far} and finally retuern  

int maxDiff(int arr[], int n)
{
    int min_num_so_far{arr[0]};
    int max_diff = arr[1] - arr[0];

    for (int i = 1; i < n; i++)
    {
        max_diff = max(max_diff, arr[i] - min_num_so_far);
        min_num_so_far = min(min_num_so_far, arr[i]);
    }
    return (max_diff > 0) ? max_diff : -1;
}

int main() {
    int n;
    cin >> n;
    
    int * arr = new int [n];
    for(size_t i {0}; i < n; ++i){
      cin >> arr[i];
    }
    cout<<maxDiff(arr, n);
    delete [] arr;
    return 0;
     
}

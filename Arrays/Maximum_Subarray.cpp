#include <iostream>
using namespace std;

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6

// Input: nums = [5,4,-1,7,8]
// Output: 23

// Input: nums = [1]
// Output: 1

// Brute force  - O(n^2)

int maxSubArray(int *arr, int size){
    int res = arr[0]; 
    for(int i {0}; i <size; ++i){
        int curr = 0;
        for (size_t j = i; j < size; j++)
        {
            curr += arr[j];
            res = max(res, curr);
        }
    }
    return res;
} 
int main(){
    int n;
    cin >> n;
    
    int * arr = new int [n];
    for(size_t i {0}; i < n; ++i){
      cin >> arr[i];
    }

    cout << maxSubArray(arr, n);
    delete [] arr;
    return 0;
    

}
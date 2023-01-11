#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

    // Brute Force - O(N^2)
// vector <int> leaders(int *arr, int size){
//     vector <int> ans;
//     for (int i = 0; i < size-1; i++)
//     {
//         bool flag = false;
//         for (int j{i+1}; j < size; ++j)
//         {
//             if (arr[i] <= arr[j])
//             {
//                 flag = true;
//                 break;
//             }
            
//         }
//         if (flag == false)
//         {
//             ans.push_back(arr[i]);
//         }
        
//     }
//     ans.push_back(arr[size-1]);
//     return ans;
// }

// Optimized Soln - O(n)

// 7 7 10 4 10 6 5 2 -> 10 6 5 2 

vector <int> leaders(int arr[], int size){
    vector <int> ans;
    int curr_leader = arr[size-1];
    ans.push_back(arr[size-1]);
    for (int i = size-2; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            // cout << arr[i] << " ";
            curr_leader = arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


int main(){
    int n;
    cin >> n;
    
    int * arr = new int [n];
    for(size_t i {0}; i < n; ++i){
      cin >> arr[i];
    }
    vector <int> ans = leaders(arr, n);
    for (auto &&i : ans)
    {
        cout << i << " ";
    }
    
    delete [] arr;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// Time - O(2^n)

// print total subsequence
// void helper(int index, int s, vector <int> &temp, int *arr, int n,int sum)
// {
//     if(index == n){
//         if(s == sum){
//             for (auto &&i : temp)
//             {
//                 cout << i << " ";           
//             }
//             cout << endl;
//         }
//         return;
//     }
//     temp.push_back(arr[index]);
//     s += arr[index];
//     helper(index+1,s,temp,arr, n,sum);
    
//     s -= arr[index];
//     temp.pop_back();
//     helper(index+1,s,temp,arr, n,sum);
// }

// Print one subsequence of given sum or to chcek whether it is true or false

// bool helper(int index, int s, vector <int> &temp, int *arr, int n,int sum)
// {
//     if(index == n){
//         if(s == sum){
//             for (auto &&i : temp)
//             {
//                 cout << i << " ";           
//             }
            // cout << endl;
            // return true;
//         }
//         else{
//             return false;
//         }
//     }
//     temp.push_back(arr[index]);
//     s += arr[index];
//     if (helper(index+1,s,temp,arr, n,sum))
//         return true;
//     s -= arr[index];
//     temp.pop_back();
//     if(helper(index+1,s,temp,arr, n,sum))
//         return true;
//     return false;
// }


// Count number of subsequences whose sum is equal to given sum

int count(int index,int s,int *arr, int n, int sum)
{
    if(index == n)
    {
        if(s == sum)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    s += arr[index];
    int l = count(index+1,s,arr,n,sum);
    s-= arr[index];
    int r = count(index+1,s,arr,n,sum);
    return l+r;

}


int main(){
    int n = 3;
    int sum = 2;

    int arr[] = {1,2,1};

    vector <int> temp;
    int index = 0;
    // helper(index, 0, temp, arr, n, sum);
    cout << count(index, 0, arr, n, sum);
    return 0;
}

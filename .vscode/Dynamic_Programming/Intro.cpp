#include <bits/stdc++.h>
using namespace std;

// Fibonecci number using dp
// Memoization
// Time - O(N)
// Space - O(N) + O(N)
// int fib_memo(int n, vector<int> &dp)
// {
//     // Base case
//     if(n <= 1) return n;
//     // Checking
//     if(dp[n] != -1)
//     {
//         return dp[n];
//     }
//     // Memoization
//     return dp[n] = fib(n-1,dp) + fib(n-2,dp);
// }

// Tabulation
// Time - O(N)
// Space - O(N)
// int fib_tab(int n, vector<int> &dp)
// {
//     dp[0] = 0, dp[1] = 1;
//     int i {2};
//     for (; i <= n; i++)
//     {
//         dp[i] = dp[i-1] + dp[i-2];        
//     }
//     return dp[i-1];
// }

// Space Optimization

// int fib_space(int n)
// {
//     int prev2 = 0, prev = 1;
//     int curi;
//     for (int i = 2; i <= n; i++)
//     {
//         curi = prev+ prev2;
//         prev2 = prev;
//         prev = curi;
//      }
//      return prev;
// }

// int main(){
//     int n;  cin >> n;

//     vector <int> dp(n+1,-1);
//     // int dp[n];
//     // memset(dp,-1,sizeof(dp));

//     // cout << "Fib of "<< n << " is: "<< fib_memo(n, dp);
//     // cout << "Fib of "<< n << " is: "<< fib_tab(n, dp);
//     cout << "Fib of "<< n << " is: "<< fib_space(n);

// };


// #include <bits/stdc++.h>

// using namespace std;

// int solveUtil(int ind, vector<int>& arr, vector<int>& dp){
    
//     if(dp[ind]!=-1) return dp[ind];
    
//     if(ind==0) return arr[ind];
//     // if(ind<0)  return 0;
//     int pick = INT_MIN;
//     if(ind > 1)
//     {
//         pick= arr[ind]+ solveUtil(ind-2, arr,dp);
//     }
//     int nonPick = 0 + solveUtil(ind-1, arr, dp);
    
//     return dp[ind]=max(pick, nonPick);
// }

// int solve(int n, vector<int>& arr){
//     vector<int> dp(n,-1);
//     return solveUtil(n-1, arr, dp);
// }


// int main() {

//   vector<int> arr{5,5,10,100,10,5};
//   int n=arr.size();
//   cout<<solve(n,arr);

// }


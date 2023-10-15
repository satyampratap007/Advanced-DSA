include <bits/stdc++.h>

using namespace std;

int solveUtil(int ind, vector<int>& arr, vector<int>& dp){
    
    if(dp[ind]!=-1) return dp[ind];
    
    if(ind==0) return arr[ind];
    // if(ind<0)  return 0;
    int pick = INT_MIN;
    if(ind > 1)
    {
        pick= arr[ind]+ solveUtil(ind-2, arr,dp);
    }
    int nonPick = 0 + solveUtil(ind-1, arr, dp);
    
    return dp[ind]=max(pick, nonPick);
}

int solve(int n, vector<int>& arr){
    vector<int> dp(n,-1);
    return solveUtil(n-1, arr, dp);
}


int main() {

  vector<int> arr{5,5,10,100,10,5};
  int n=arr.size();
  cout<<solve(n,arr);

}
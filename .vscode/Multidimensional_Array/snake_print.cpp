#include <bits/stdc++.h>
using namespace std;
void print(vector<vector <int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (size_t j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";      
    }
}

vector <int> snakePattern(vector<vector <int>> arr)
{
    vector <int> ans ;
    for (int i = 0; i < arr.size(); i++)
    {
        if (!(i%2))
        {
            for (int j = 0; j < arr.size(); j++)
            {
                ans.push_back(arr[i][j]) << " ";
            }
        }
        else
        {
            for (int j = arr.size()-1; j >=0 ; --j)
            {
                ans.push_back(arr[i][j])<< " "; 
            }
        }
        
    }
}

int main(){
    int m;  cin >> m;
    vector<vector <int>> arr(m);
    for (int i = 0; i < m; i++)
    {
        arr[i].assign(m,0);
        for (int j{0}; j<m ;j++)
        {
            cin >> arr[i][j];            
        }
    }
    print(arr);

    vector <int> ans = snakePattern(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
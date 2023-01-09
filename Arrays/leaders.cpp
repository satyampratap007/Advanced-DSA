#include <iostream>
#include <vector>
using namespace std;

vector <int> leaders(int *arr, int size){
    // Brute Force - O(N^2)
    vector <int> ans;
    for (int i = 0; i < size-1; i++)
    {
        bool flag = false;
        for (int j{i+1}; j < size; ++j)
        {
            if (arr[i] < arr[j])
            {
                flag = true;
                break;
            }
            
        }
        if (flag == false)
        {
            ans.push_back(arr[i]);
        }
        
    }
    ans.push_back(arr[size-1]);
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
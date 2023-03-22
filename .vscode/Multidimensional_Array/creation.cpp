#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m{3},n{2};

    /* 1) Using Double Pointer*/
    // int **arr = new int *[m];

    // for (int i = 0; i < m; i++)
    // {
    //     arr[i] = new int [n];
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 10;
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    /* 2) Using Pointer of array */

    // int *arr[m];
    // for (int  i = 0; i < m; i++)
    // {
    //     arr[i] = new int[n];
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 10;
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
        
    // }
    
    /* 3) Using array of vectors */

    // vector <int> arr[m];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j{0}; j < n; j++)
    //     {
    //         arr[i].push_back(10);
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    /* 4) Using vector of vectors */
    vector <vector <int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(10);
        }
        arr.push_back(v);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;

}
#include <iostream>
#include <vector>
using namespace std;

// C style passing 2d arguements

// void print1(int arr[3][2])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout << arr[i][j] << " "; 
//         }
//         cout << "\n";
//     }
// }

// General purpose matrix function which can work for any dimensions

// Using double pointer

// void print2(int **arr, int m, int n)
// {
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
    
// }


// int main(){
    // int mat[3][2] = {
    //             {10,20},
    //             {30,40},
    //             {50,60}
    //            };
    // print1(mat);

    // int m{3}, n{2};
    // 1) Using Double Pointer
    // int **arr;
    // arr = new int*[m];

    // 2) Using array of pointer
    // int *arr[m];

    // for (int i = 0; i < m; i++)
    // {
    //     arr[i] = new int[n];
    //     for(int j{0}; j<n; ++j)
    //     {
    //         arr[i][j] = i;
    //     }
    // }
    // print2(arr,m,n);

// }

// Using c++ soln to write general purpose matrix functions

// void print(vector <int>arr[], int m)
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

int main(){
    int m{3}, n{2};

    // 1) Using Arrays of vector
    // vector <int> arr[m];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i].push_back(i);
    //     }
    // }
    // print(arr,m);


    // Uisng vector of vectors
    vector <vector <int>> arr;

    for (int i = 0; i < m; i++)
    {
        vector <int> r;
        for (int j = 0; j < n; j++)
        {
            r.push_back(i);
        }
        arr.push_back(r);
    }
    print(arr);
    
}
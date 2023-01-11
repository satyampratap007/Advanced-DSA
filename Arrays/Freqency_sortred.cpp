#include <iostream>
#include <vector>
using namespace std;

// Frequency of elements in sorted array
/* Test cases:-
6
10 10 10 30 30 40 

10 3
30 2
40 1


4
10 20 20 20

10 1
20 3

3
10 20 30
10 1
20 1
30 1
*/

// time- O(n)
// Ist approach
// void frequency(vector <int> arr){
//     int fast{0}, slow{0};
//     int len = arr.size();
//     while(fast < len-1){
//         if (arr[fast] != arr[fast+1])
//         {
//             cout << arr[slow] << " " << (fast-slow+1) << "\n";
//             fast++;
//             slow = fast;
//         }
//         else{
//             if (fast+1 == len-1)   // if last element is = to prev element and fast + 1 points to end of that vector 
//             {
//                 cout << arr[slow] << " " << fast - slow + 2; 
//                 return; 
//             }
//             else
//             {
//                 fast++;
//             }           
//         }
//     }
//     if (len == 1 || arr[len-1] != arr[len-2])
//     {
//         cout << arr[len-1] << " " << "1";
//     }
// } 


// 2nd Approach

void frequency(vector <int> arr)
{
    int i {1}, freq {1};
    int len = arr.size();
    while (i < arr.size())
    {
        while (arr[i] == arr[i-1])
        {
           freq++;
           i++;
        }
        cout << arr[i-1] << " " << freq << "\n";
        freq = 1;
        i++;    
    }
    if (len == 1 || arr[len-1] != arr[len-2])
    {
        cout << arr[len-1] << " " << "1";
    }
}

int main(){
    int n;  cin >> n;
    vector <int> vec ;
    for (int i = 0; i < n; i++)
    {
        int data;   cin >> data;
        vec.push_back(data);
    }
    
    frequency(vec);
    return 0;
    

}
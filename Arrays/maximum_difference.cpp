// Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.
/*Test cases:
arr[] = {2,3,10,6,4,8,1}
op: 8

arr[] = {7,9,5,6,3,2}
op: 2

arr[] = {10,20,30}
op: 20

arr[] = {30,10,8,2}
op: -2

*/


#include <iostream>
#include <cmath>
using namespace std;


int max_diff = INT32_MIN;
int maxDiff(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j{i+1}; j < n;++j)
        {
            if ((arr[j] - arr[i]) > max_diff)
            {
                max_diff = arr[j] - arr[i];
            }
        }
    }
    return max_diff;
}



int main() {
    int n;
    cin >> n;
    
    int * arr = new int [n];
    for(size_t i {0}; i < n; ++i){
      cin >> arr[i];
    }
    cout<<maxDiff(arr, n);
    delete [] arr;
    return 0;
    
}

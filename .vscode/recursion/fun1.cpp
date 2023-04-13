#include <iostream>
using namespace std;

// decimal to binary
// void fun1(int n)
// {
//     if(n == 0)
//     {
//         return;
//     }
//     fun1(n/2);
//     cout << n%2 ;
// }

// int fun2(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }                     
    
//     return fun2(n/10) + n%10;    
// }

// int main(){
//     int n;
//     cin >> n;
//     // fun1(n);
//     cout << fun2(n);
// }


//Reverse an array

// #include <iostream>
// using namespace std;

// void reverse(int *&arr,int low, int high)
// {
//     if (low >= high)
//     {
//         return;
//     }
    
//     swap(arr[low], arr[high]);
//     reverse(arr, low+1, high-1);
// }

// int main(){
//     int n;
//     cin >> n;
    
//     int * arr = new int [n];
//     for(size_t i {0}; i < n; ++i){
//       cin >> arr[i];
//     }
//     reverse(arr,0,n-1);
//     for(size_t i {0}; i < n; ++i){
//       cout << arr[i] << " ";
//     }
    
    
//     delete [] arr;
//     return 0;

// }


// Pallindrome check


#include <iostream>
using namespace std;

bool pall(string &str, int i)
{
    if (i >= str.size()/2)
    {
        return true;
    }
    if (str[i] != str[str.size()-i-1])
    {
        return false;
    }
    return pall(str,i+1);    
           
}

int main(){

    string str;
    cin >> str;

    cout << boolalpha << pall(str,0);
}
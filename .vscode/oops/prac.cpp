// #include <iostream>
// #include <vector>
// using namespace std;


// class node{
//     public:
//     int data;
//     node*next;

//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(node*head)
// {
//     node * temp = head;
//     while(temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// void insert(node*head,int n)
// {
//     node * temp = head;
//     while(temp->next)
//     {
//         temp = temp->next;
//     }
//      node * last = new node(n);
//      temp->next = last;
// }


// int main(){
//     node * temp = new node(10);
//     temp->next = new node(20);
//     temp->next->next = new node(30);

//     print(temp);
//     cout << "\n";
//     insert(temp,40);
//     print(temp);
// }


// void push(vector <int> &arr)
// {
//     for(int i{0}; i < arr.size(); ++i)
//     {
//         cin >> arr[i];
//     }
// }

// void print(vector <int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " " ;
//     }
// }
// void insert(vector <int> &arr, int n)
// {
//     cin >> arr[n-1];
// }


// int main(){
    // int n {5};

    // vector <int> v(n);

    // int 
    // for(int i{0}; i < n; ++i)
    // {
    //     cin >> v[i];
    // }

    // v.push_back(10);
    // v.push_back(30);

    // for(auto i: v)
    // {
    //     cout << i << "\n";
    // }
    // v.pop_back();
    // for(auto i: v)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n" << v.size();
    
// }



#include <iostream>
using namespace std;

int main(){
    int n{7};

    int ans =  n & (n-1);
    cout << ans;

}
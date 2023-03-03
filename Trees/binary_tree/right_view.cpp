#include <bits/stdc++.h>
using namespace std;


struct Node  
{ 
  int data; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      data=k;
      left=right=NULL;
  }
};

// Time - O(N)
// space - O(N)
 
vector<int> rightView(Node *root)
{
    vector <int> ans;
    if(!root)
    {
        return ans;
    }
}


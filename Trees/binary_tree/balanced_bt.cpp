#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

// Naive Approach
// int height(Node*root)
// {
//     return (!root)? 0 : 1 + (max(height(root->left), height(root->right))); 
// }

// bool isBalanced(Node *root){
//     if (root == NULL)
//     {
//         return true;
//     }

//     int l_h = height(root->left);
//     int r_h = height(root->right);

//     return(abs(l_h - r_h) <= 1 && isBalanced(root->left) && isBalanced(root->right));
// }

int balanced(Node*root)
{
    if (root == NULL)
    {
        return 0;
    }
    
    int lh = balanced(root->left);
    int rh = balanced(root->right);
    if (lh == -1 || rh == -1)
    {
        return -1;
    }
    if (abs(lh-rh) > 1)
    {
        return -1;
    }
    return 1 + max(lh,rh);
}
bool isBalanced(Node *root){
    return balanced(root) != -1;     

}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);
	
	if(isBalanced(root))
	    cout<<"Balanced";
	else
	    cout<<"Not Balanced";
}

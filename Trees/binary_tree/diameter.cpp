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

// Brute Force - O(N^2)

// int height(Node *root)
// {
//     return (!root) ? 0 : 1 + max(height(root->left), height(root->right)); 
// }

// int maxi{0};
// int diameter(Node *root)
// {
//     if (!root)
//     {
//         return 0;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     maxi = max(maxi, lh+rh);
//     diameter(root->left);
//     diameter(root->right);
//     return maxi;

// }

// Efficient - O(N)

// int height(int &maxi, Node * root)
// {
//     if (!root)
//     {
//         return 0;
//     }
//     int lh = height(maxi, root->left);
//     int rh = height(maxi, root->right);
//     maxi = max(maxi, lh+rh);
//     return 1 + max(lh,rh);
// }


// int diameter(Node*root)
// {
//     int maxi = 0;
//     height(maxi, root);
//     return maxi;
// }

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(60);
	root->right->left->left=new Node(50);
	root->right->right->right=new Node(70);
	
	cout<<diameter(root);
}
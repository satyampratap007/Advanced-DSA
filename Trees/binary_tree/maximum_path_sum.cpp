#include <bits/stdc++.h>
using namespace std;
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

int findmax(Node*root, int maxi)
{
    
}

int findMaxSum(Node*root)
{
    int maxi = 0;
    findmax(root,maxi);
    return maxi;
}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(60);
	root->right->left->left=new Node(50);
	root->right->right->right=new Node(70);
	
	cout<<findMaxSum(root);
}
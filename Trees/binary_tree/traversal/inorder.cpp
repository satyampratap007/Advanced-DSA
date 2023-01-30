#include <bits/stdc++.h>
using namespace std;

struct node
{
    public:
    int data;
    struct node*left;
    struct node*right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Recursive Solution

void inorder(node *root){
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void iterative_inorder(node*root)
{
    if (root == NULL)
    {
        return;
    }
    
    stack <node*> st;
    node * curr = root;
    while (!st.empty() || curr != NULL)
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

int main()
{
    struct node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);
    cout << "\n Preorder traversal of given B.T: ";
    inorder(root);
    cout << "\n\n";
    iterative_inorder(root);
    return 0;
}




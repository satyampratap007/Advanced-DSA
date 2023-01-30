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
void postorder(node *root){
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Iterative solution - Using 2 stacks

void iterative_postorder(node*root)
{
    if (root == NULL)
    {
        return;
    }
    stack <node*> st1;
    stack <node*> st2;
    st1.push(root);
    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if (root->left != NULL)
        {
            st1.push(root->left);
        }
        if (root->right != NULL)
        {
            st1.push(root->right);
        }
    }
    while (!st2.empty())
    {
        cout << st2.top()->data << " ";
        st2.pop();
    }
}

int main()
{
    struct node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);
    cout << "\n Preorder traversal of given B.T: ";
    postorder(root);
    cout << "\n\n\n";
    iterative_postorder(root);
    return 0;
}





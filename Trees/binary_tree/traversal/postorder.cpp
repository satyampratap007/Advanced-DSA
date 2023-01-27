#include <iostream>
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

int main()
{
    struct node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);
    cout << "\n Preorder traversal of given B.T: ";
    preorder(root);
}




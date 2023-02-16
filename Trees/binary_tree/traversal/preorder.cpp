#include <iostream>
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

void preorder(node *root){
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Iteratitve preorder traversal

// void iterative_preorder(node *root){
//     if (root == NULL)
//     {
//         return;
//     }
//     stack <node*> s;
//     s.push(root);
//     while (!s.empty())
//     {
//         node* temp = s.top();
//         s.pop();
//         cout << temp->data << " ";
//         if (temp->right != NULL)
//         {
//             s.push(temp->right);
//         }
//         if (temp->left != NULL)
//         {
//             s.push(temp->left);
//         }
//     }
// }
// Iteratitive Preorder space optimized - Space -> O(h)
void iterative_preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack <node*> st;
    st.push(root);
    node * curr = root;
    while (!st.empty() || curr != NULL)
    {
        while(curr != NULL)
        {
            cout << curr->data;
            if (curr->right != NULL)
            {
                st.push(curr->right);
            }
            curr = curr->left;
        }
        if (!st.empty())
        {
            curr = st.top(); 
            st.pop();
        }  
    }
}
int main()
{
    struct node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);
    cout << "\n Preorder traversal of given B.T: ";
    preorder(root);
    cout << "\n\n\n\n";
    iterative_preorder(root);
}




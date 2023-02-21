//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:

    void left_subtree(Node*root, vector<int>&ans)
    {
        if (!root || !root->left && !root->right)
        {
            return;
        }
        ans.push_back(root->data);
        left_subtree(root->left ,ans);
        left_subtree(root->right, ans);
    }

    void traverse_leaf(Node*root, vector<int>&ans)
    {
        if (!root)
        {
            return;
        }
        if (!root->left && !root->right)
        {
            ans.push_back(root->data);
            return;
        }
        traverse_leaf(root->left,ans);
        traverse_leaf(root->right,ans);
    }
    void traverse_right(Node *root, vector<int> &ans)
    {
        if (!root || !root->left && !root->right)
        {
            return;
        }
        if (root->right)
        {
            traverse_right(root->right,ans);
        }
        else{
            traverse_right(root->left,ans);
        }
        ans.push_back(root->data);
    }

    vector <int> boundary(Node *root)
    {
        vector <int>ans;
        if (!root)
        {
            return ans;
        }
        ans.push_back(root->data);
        left_subtree(root->left,ans);
        traverse_leaf(root->left,ans);
        traverse_leaf(root->right,ans);
        traverse_right(root->right, ans);
        return ans;
    }
    
};


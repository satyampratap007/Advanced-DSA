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
 
vector<int> bottomView(Node *root)
{
    vector <int> ans;
        if(!root)
            return ans;
            
        queue <pair<Node*, int>> q;
        map <int, int> mp;
        q.push({root,0});
        
        while(!q.empty())
        {
            int line = q.front().second;
            Node*node = q.front().first;
            q.pop();
            mp[line] = node->data;
            if(node->left){
                q.push({node->left, line-1});
            }
            if(node->right){
                q.push({node->right, line+1});
            }
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;

}


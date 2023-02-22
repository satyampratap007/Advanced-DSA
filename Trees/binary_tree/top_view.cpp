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
 
vector<int> topView(Node *root)
{
    vector <int> ans;
    if(!root)
    {
        return ans;
    }
    queue <pair<Node*, int>> q; // (root,line)
    map <int, int> mp; // (line, data)
    q.push({root,0});
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node * node = it.first;
        int line = it.second;
        
        // if(mp.find(line) == mp.end()){
        //     mp[line] = node->data;
        // }
        if(mp[line] == 0){
            mp[line] = node->data;
        }
        if(node->left)
        {
            q.push({node->left,line-1});
        }
        if(node->right)
        {
            q.push({node->right, line+1});
        }
    }
    for(auto i:mp){
        ans.push_back(i.second);
    }
    return ans;
}


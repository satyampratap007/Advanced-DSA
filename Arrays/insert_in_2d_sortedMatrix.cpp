#include <bits/stdc++.h>
using namespace std;
vector <int> insert(vector<vector<int>> &matrix,int L, int W, int H)
{
    vector <int> ans;
    int low = 0, high = L*W-1;

    while(low <= high)
    {
        int mid = (low + high) >> 1;

        int r = mid/W, c = mid%W;
        // if(matrix[r][c] == target)
        // {
        //     return true;
        // }
        if(matrix[r][c] > H)
        {
                high = mid - 1;
        }
        else if(matrix[r][c] < H){
            ans[0] = low;
            ans[1] = high;
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    int L, W;
    cin >> L >> W;

    vector<vector<int>> room(L, vector<int>(W));
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < W; j++) {
            cin >> room[i][j];
        }
    }
    int H;
    cin >> H;
    vector <int> ans = insert(room,L,W,H);
    for(auto i : ans)
        cout << i << " ";
}
#include <iostream>
#include <vector>
using namespace std;

// Brute force
// Time - O(N^2)
// spaca - O(1)

// int trap(vector<int>& height){
//     int res{0};
//     int len = height.size();
//     for (int i = 1; i < len-1; i++)
//     {
//         // Finding lmax
//         int l_max = height.at(i);
//         for (int l = 0; l < i ; l++)
//         {
//             l_max = max(l_max,height[l]);
//         }
//         // finding rmax
//         int r_max = height.at(i);
//         for (int r{i+1}; r < len; ++r)
//         {
//             r_max = max(r_max, height[r]);
//         }
//         res += min(l_max,r_max) - height.at(i);
//     }
//     return res;
// }

// More optimized solution
// Time - O(N)
// space - O(2N)


int trap (vector <int> &height){


}

int main(){
    int n;  cin >> n;
    vector <int> inp;
    for (size_t i = 0; i < n ; i++)
    {
        int data;
        cin >> data;
        inp.push_back(data);
    }
    cout << trap(inp);
    return 0;

}


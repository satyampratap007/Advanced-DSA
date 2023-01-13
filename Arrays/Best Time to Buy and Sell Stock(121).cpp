#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int msvf = prices[0];
        int max_diff = prices[0] - msvf;
        for(int i{0}; i < prices.size();++i){
            max_diff = max(max_diff, (prices[i] - msvf));
            msvf = min(msvf,prices[i]);
        }
        return (max_diff < 0) ? 0 : max_diff;  
    }
};


int main(){
    int n;
    cin >> n;   
    
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int data;   cin >> data;
        arr.push_back(data);
    }
    Solution obj;
    cout << obj.maxProfit(arr);
    return 0;
 
}

#include <iostream>
#include <queue>
using namespace std;

int main(){
    vector <int> arr = {3,4,18,5,4,6,9};
    priority_queue <int, vector<int>, greater <int>> pq(arr.begin(), arr.end()); // Min heap

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop(); 
    }
        


}
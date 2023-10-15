// #include <iostream>
// using namespace std;
// //node declaration for doubly linked list
// struct Node {
//    int data;
//    struct Node *prev, *next;
// };
  
// Node* newNode(int val)
// {
//    Node* temp = new Node;
//    temp->data = val;
//    temp->prev = temp->next = nullptr;
//    return temp;
// }
// void displayList(Node* head)
// {
//    while (head->next != nullptr) {
//       cout << head->data << " <==> ";
//       head = head->next;
//       }
//    cout << head->data << endl;
// }
  
// // Insert a new node at the head of the list
// void insert(Node** head, int node_data)
// {
//    Node* temp = newNode(node_data);
//    temp->next = *head;
//    (*head)->prev = temp;
//    (*head) = temp;
// }
  
// // reverse the doubly linked list
// void reverseList(Node** head)
// {
//    Node* left = *head, * right = *head;
  
//    // traverse entire list and set right next to right
//    while (right->next != nullptr)
//    right = right->next;
  
//    //swap left and right data by moving them towards each other till they meet or cross
//    while (left != right && left->prev != right) {
  
//       // Swap left and right pointer data
//       swap(left->data, right->data);
  
//       // Advance left pointer
//       left = left->next;
  
//       // Advance right pointer
//       right = right->prev;
//    }
// }
// int main()
// {
//    Node* headNode = newNode(5);
//    insert(&headNode, 4);
//    insert(&headNode, 3);
//    insert(&headNode, 2);
//    insert(&headNode, 1);
//    cout << "Original doubly linked list: " << endl;
//    displayList(headNode);
//    cout << "Reverse doubly linked list: " << endl;
//    reverseList(&headNode);
//    displayList(headNode);
  
//    return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     // Given vector
//     vector<int> v = {1, 3, 5, 7, 9, 10};          
    
//     // Iterator
//     auto it = lower_bound(v.begin(), v.end(), 9); 
//     int pos = (it - v);
    
//     // Printing the value and position.
//     cout << "The value is: " << *it << " at the position: " << pos << endl; 
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5;
//     int b = 4;
//     cout << (a&b);

// }

//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int>>& matrix) {
    int count_1 = 0;
    int r = matrix.size(), c = matrix[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (matrix[i][j] == 1) {
                int count_0 = 0;
                int r1 = max(i - 1, 0);
                int r2 = min(i + 1, r - 1);
                int c1 = max(j - 1, 0);
                int c2 = min(j + 1, c - 1);

                for (int rIndex = r1; rIndex <= r2; ++rIndex) {
                    for (int cIndex = c1; cIndex <= c2; ++cIndex) {
                        if (matrix[rIndex][cIndex] == 0) {
                            count_0++;
                        }
                    }
                }

                if (count_0 % 2 == 0) {
                    count_1++;
                }
            }
        }
    }

    return count_1;
}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
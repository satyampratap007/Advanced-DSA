// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//     node* next;
//     char data;
//     node(char data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };


// node *reverse(node * head){
//     vector <char> temp;
//     node * curr1 = head;
//     while (curr1 != NULL)
//     {
//         temp.push_back(curr1->data);
//         curr1 = curr1->next;
//     }
//     node * curr2 = head;
//     while (curr2 != NULL)
//     {
//         curr2->data = temp.back();
//         curr2 = curr2->next;
//         temp.pop_back();
//     }
//     return head;
// }

// void display(node * &head){
//     node * curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->data << "-> ";
//         curr = curr->next;
//     }
// }

// int main(){
//     int size;
//     char data, ist_data;
//     cin >> size >> ist_data;

//     node * head = NULL, *tail = NULL;
//     head = new node(ist_data);
//     tail = head;

//     for (size_t i = 1; i < size; i++)
//     {
//         cin >> data;
//         tail->next = new node(data);
//         tail = tail->next;
//     }
//     display(head);
//     reverse(head);
//     cout << "\n";
//     display(head);
// }


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	char data;
	Node(char d) { data = d; }
	Node* ptr;
};

bool isPalin(Node* head)
{

	Node* slow = head;
	stack<char> s;
	while (slow != NULL) {
		s.push(slow->data);
		slow = slow->ptr;
	}

	while (head != NULL) {
		int i = s.top();
		s.pop();
		if (head->data != i) {
			return false;
		}
		head = head->ptr;
	}
	return true;
}
int main()
{

	Node one = Node('a');
	Node two = Node('b');
	Node three = Node('c');
	Node four = Node('b');
	Node five = Node('a');


	five.ptr = NULL;
	one.ptr = &two;
	two.ptr = &three;
	three.ptr = &four;
	four.ptr = &five;
	Node* temp = &one;

	int result = isPalin(&one);

	if (result == 1)
		cout << "Given list is palindrome \n";
	else
		cout << "Given list is not palindrome \n";
	return 0;
}

// This code has been contributed by Striver

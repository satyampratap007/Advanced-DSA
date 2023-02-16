// #include <iostream>
// using namespace std;

// void swap(int *low, int *high){
//     int temp = *low;
//     *low = *high;
//     *high = temp;
// }

// int main(){
//     int arr [] = {1,2,3,4,5,6,7,8,9,10};
//     size_t len = sizeof(arr)/sizeof(arr[0]);
//     cout << "Given Array: ";
//     for (size_t i = 0; i < len;i++)
//     {
//         cout << *(&arr[i]) << " ";
//     }

//     cout << "\n\nReverse of an array: ";
//     int low = 0;
//     int high = len-1;
//     while (low < high)
//     {
//         swap(&arr[low++], &arr[high--]);
//     }
//     for (size_t i = 0; i < len; i++)
//     {
//         cout << arr[i] << " "; 
//     }
//     cout << "\n\nSum of an array: ";
//     int sum{0};
//     for (size_t i = 0; i < len; i++)
//     {
//         sum += arr[i];
//     }
//     cout << sum << "\n";
//     return 0;
// }
 
 #include <iostream>
 using namespace std;
 
 struct node
 {
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
 };

 void print(node *&head){
    node * curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
 }

 void insert(node*head, int data, int n){
    node * curr = head->next;
    while (n)
    {
        head = head->next;
        curr = head->next;
        n--;
    }
    head->next = new node(data);
    head->next->next = curr;
 }

 int main(){
    int size, Ist_data;
    cin >> size >> Ist_data;

    node * head = new node(Ist_data); 
    node * tail = head;
    int data;
    for (int i = 1; i < size; i++)
    {
        cin >> data;
        tail = new node(data);
        tail = tail->next;
    }
    int n, new_data;
    cout << "Enter the value of n: ";
    cin >> n >> new_data;

    insert(head,new_data,n);
    print(head);

 }
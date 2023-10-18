// #include <iostream>
// using namespace std;

// class MinHeap{
//     private:
//     int *arr;
//     int size; // size of heap 
//     int capacity; // size of array

//     public:
//     MinHeap(){}
//     MinHeap(int c){
//         arr = new int(c);
//         size = 0;
//         capacity = c;
//     }
//     int left(int i){
//         return (2*i + 1);
//     }
    
//     int right(int i){
//         return (2*i + 2);
//     }
//     int parent(int i){
//         return (i-1)/2;
//     }
//     void insert(int ele)
//     {
//         if(size == capacity){
//             cout << "Can't insert it!" << "\n";
//             return;
//         }
//         size++;
//         int i = size-1;
//         arr[i] = ele;

//         while (i != 0 && arr[parent(i)] > arr[i])
//         {
//             swap(arr[i], arr[parent(i)]);
//             i = parent(i);
//         }
//     }

    
// };


// int main(){
//     MinHeap h(5);
//     h.insert(3);
//     h.insert(2);
//     h.insert(15);
//     h.insert(20);
// }


// Function to insert element in a min heap

#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    private:
    int *arr;
    int size; // size of heap 
    int capacity; // size of array

    public:
    MinHeap(){}
    MinHeap(int c){
        arr = new int(c);
        size = 0;
        capacity = c;
    }
    int left(int i){
        return (2*i + 1);
    }
    
    int right(int i){
        return (2*i + 2);
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert_min_heap(vector <int> &heap,int element)
    {
        heap.push_back(element);
        int ind = heap.size()-1;
        while(ind != 0 && heap[parent(ind)] > heap[ind])
        {
            swap(heap[ind], heap[parent(ind)]);
            ind = parent(ind);
        }
    }
};

int main(){
    vector <int> heap;
    vector <int>  values = { 10, 7, 11, 5, 4, 13};
    int len = values.size();

    MinHeap h;
    for(int i{0}; i < len; ++i){
        h.insert_min_heap(heap, values[i]);       
        cout << "Inserted " << values[i]
             << " into the min-heap: ";
        for (int j = 0; j < heap.size(); j++) {
            cout << heap[j] << " ";
        }
        cout << "\n";
    }
}

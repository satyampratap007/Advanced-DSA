#include <iostream>
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
    void insert(int ele)
    {
        if(size == capacity){
            cout << "Can't insert it!" << "\n";
            return;
        }
        size++;
        int i = size-1;
        arr[i] = ele;

        while (i != 0 && arr[parent(i)] < arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    
};


int main(){
    MinHeap h(5);
    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(20);

        
  
}
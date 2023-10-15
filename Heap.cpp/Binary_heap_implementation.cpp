#include <iostream>
using namespace std;

class MinHeap{
    private:
    int arr[];
    int size; // size of heap 
    int capacity; // size of array

    public:
    MinHeap(int c){
        arr = new int(c);
        size = 0;
        this->capacity = c;
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
};

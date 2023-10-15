#include <iostream>
#include <cmath>

using namespace std;
class MinHeap{
    int size;
    int capacity;
    int *arr;

    MinHeap(int c)
    {
        size = 0;
        arr = new int(c);
        capacity = c;
    }

    int left(int i){
        return 2*i + 1;
    }
    int right(int i){
        return 2*i + 2;
    }
    int parent(int i){
        return (i-1)/2;
    }

    void min_heapify(int ind)
    {
        int l = left(ind);
        int r = right(ind);
        
        int mini = ind;
        if(ind < size && arr[l] < arr[ind]){
            mini = l;
        }
        if(ind < size && arr[r] < arr[ind]){
            mini = r;
        }
        if(mini != ind)
        {
            swap(arr[ind], arr[mini]);
            min_heapify(mini);
        }

    }

    int extract_min(){
        if(size == 0)   return INT_MAX;
        if(size == 1){
            size--;
            return arr[0];
        }    

        swap(arr[0], arr[size-1]);
        size--;
        min_heapify(0);
        return arr[size];
    }





};
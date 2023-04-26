#include <iostream>
using namespace std;

void swap(int arr[], int a,int b){
   int temp = arr[a];
   arr[a] = arr[b];
   arr[b] = temp;
}

void heapSort(int arr[], int n) {
   for(int i=0;i<n-1;i++){
      int parent = i;
      int l = 2*parent+1;
      int r = 2*parent+2;
      int mid;
      if(arr[l] > arr[r]){
         mid = l;
      }else{
         mid = r;
      }

      if(arr[mid] > arr[parent]){
         swap(arr,mid,parent);
      }
   }
}

void removeHeapify(int arr[],int n){
   // remove elements for sorted result
   int size = n;
   while(size>1){
      swap(arr,0,size-1);
      size--;
      int parent = 0;
      int l = 2*parent+1;
      int r = 2*parent+2;
      while(l<size){
         int min = parent;
         if(arr[min] < arr[l]){
            min = l;
         }
         if(r<size && arr[r] > arr[min]){
            min = r;
         }
         if(min == parent){
            break;
         }
         swap(arr,min,parent);
         parent = min;
         l  =2*parent+1;
         r = 2*parent+2;
      }
   }
}

void heapSortSolution(int arr[],int n){
   for(int i=1;i<n;i++){
      int child = i;
      while(child>=0){
         int parent= (child-1)/2;
         if(arr[parent] > arr[child]){
            swap(arr,parent,child);
         }else{
            break;
         }
         child = parent;
      }
   }

   removeHeapify(arr,n);
}

int main() {
   int size;
   cin >> size;

   int *input = new int[size];

   for (int i = 0; i < size; i++) {
      cin >> input[i];
   } 

   heapSortSolution(input, size);

   for (int i = 0; i < size; i++) {
      cout << input[i] << " ";
   } 

   delete[] input;
}

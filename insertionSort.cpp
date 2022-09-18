#include <iostream>
using namespace std;

// Insertion Sort: Worst case Time Complexity = O(n^2)
// Best Case Time Complexity : O(n)
// Used for small arrays
// In place and stable algorithm
void insertionSort(int* arr,int n){ 
  int key , j;
  for(int i=1;i<n;i++){
      key = arr[i];
      j = i-1;
      while(j>=0 && arr[j]>key){
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = key;
  }
}
int main() {
    int a[] = {1,10,16,34,6,78,0,3,800};
    int n = sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    return 0;
}

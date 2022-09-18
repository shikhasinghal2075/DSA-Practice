#include <iostream>
using namespace std;

// Bubble Sort: Worst case Time Complexity = O(n^2)
// Does not require extra memory : Input array itself modified
void bubbleSort(int* arr,int n){        //Naive Approach
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void bubbleSortOptimised(int* arr,int n){
    bool swapped = false;
    for(int i=0;i<n-1;i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}
int main() {
    int a[] = {1,10,16,34,6,78,0};
    int n = sizeof(a)/sizeof(a[0]);
    bubbleSort(a,n);
    bubbleSortOptimised(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    return 0;
}

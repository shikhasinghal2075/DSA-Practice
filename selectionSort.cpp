#include <iostream>
using namespace std;

// Find index of minimum element and swap with starting index
// Selection Sort: Worst case Time Complexity = O(n^2)
void selectionSort(int* arr,int n){        
    int min_index = 0;
    for(int i=0;i<n-1;i++){
        min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index])
                min_index = j;
        }
        swap(arr[min_index],arr[i]);
    }
}
int main() {
    int a[] = {1,10,16,34,6,78,0};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    return 0;
}

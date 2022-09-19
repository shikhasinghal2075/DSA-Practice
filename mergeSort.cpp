#include <iostream>
using namespace std;
// Divide and Conquer 
// Time Complexity of Merge Sort : O(n*logn)
// Space Complexity : O(n)
// Stable Algorithm
// Well suited for Linked Lists : Works in O(1) auxiliary space
void merge(int* arr, int l, int m, int r){
    int n1 = m-l+1, n2 = r-m;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++)
        left[i] = arr[l+i];
    for(int j=0;j<n2;j++)
        right[j] = arr[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i] <= right[j])     //Equality makes sure of stabiltiy
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while(i<n1)
        arr[k++] = left[i++];
    while(j<n2)
        arr[k++] = right[j++];
}
void mergeSort(int* arr,int l, int r){
    if(r>l){                  // l:start index , e:end index
        int m = l + (r-l)/2;  //Mid Index
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main() {
    int a[] = {1,4,5,0,33,11,90};
    int r = sizeof(a)/sizeof(a[0])-1;   // End Index
    int l = 0;                          // Start Index
    mergeSort(a,l,r);
    for(int i=0;i<=r;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}

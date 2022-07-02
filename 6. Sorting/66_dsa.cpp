// insertion sort
#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for (int i = 1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[] = {65,32,99,147,258,369,121,45,57,29};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
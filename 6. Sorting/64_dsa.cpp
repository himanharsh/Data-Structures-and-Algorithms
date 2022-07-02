// bubble sort
#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int *arr, int n){
    bool swapped;
    for (int i = 0; i<n-1; i++){
        swapped = false;
        for (int j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = {65,32,99,147,258,369,121,45,57,29};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
// second largest element in an array
#include<iostream>
using namespace std;

int secondLargest(int *arr, int n){
    int res = -1, largest = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]>largest){
            res = largest;
            largest = arr[i];
        }
        if (arr[i]<largest){
            if (arr[i]>res || res == -1)
                res = arr[i];
        }
    }
    return res;
}

int main()
{
    int arr[] = {99,34,55,13,96,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargest(arr,n);
    return 0;
}
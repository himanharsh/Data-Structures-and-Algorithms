// left rotate an array by one
#include<iostream>
using namespace std;

void lrotate1(int *arr, int n){
    int temp = arr[0];
    for (int i = 1; i<n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}

int main()
{
    int arr[] = {3,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    lrotate1(arr,n);
    for(int x: arr)
        cout<<x<<" ";   
    return 0;
}
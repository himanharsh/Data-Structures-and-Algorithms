// leader in an array
#include<iostream>
using namespace std;

void leader(int *arr, int n){
    int curr_ldr = arr[n-1];
    cout<<curr_ldr<<" ";
    for (int i = n-2; i>=0; i--){
        if (arr[i]>curr_ldr){
            curr_ldr = arr[i];
            cout<<curr_ldr<<" ";
        }
    }
}

int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    leader(arr,n);
    return 0;
}
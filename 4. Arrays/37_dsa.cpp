//frequencies in a sorted array
#include<iostream>
using namespace std;

void printFreq(int *arr, int n){
    int freq = 1, i = 1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq = 1;
    }
    if (n==1 || arr[n-1] != arr[n-2])
        cout<<arr[n-1]<<" "<<1;
}

int main()
{
    int arr[] = {19,19,12,12,12,12,12,10,8,8,6,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printFreq(arr,n);
    return 0;
}
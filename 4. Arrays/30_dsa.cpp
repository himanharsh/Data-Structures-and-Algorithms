// reverse an array
#include<iostream>
#include<algorithm>
using namespace std;

void reversing(int *arr, int n){
    int low = 0, high = n-1;
    while (low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {3,5,6,6,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    reversing(arr,n);
    for (int x:arr)
        cout<<x<<" ";
    return 0;
}
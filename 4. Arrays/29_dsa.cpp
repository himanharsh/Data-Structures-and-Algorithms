// check if an array is sorted
#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    for (int i = 1; i<n; i++)
        if (arr[i]<arr[i-1])
            return false;
    return true;
}

int main()
{
    int arr[] = {23,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool res = isSorted(arr,n);
    res == 1?cout<<"Yes":cout<<"No";
    return 0;
}
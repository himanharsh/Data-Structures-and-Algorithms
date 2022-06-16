// largest element in an array
#include<iostream>
using namespace std;

int largest(int *arr, int n){
    int res = arr[0];
    for (int i = 1; i<n; i++)
        if (arr[i]>res)
            res = arr[i];
    return res;
}

int main()
{
    int arr[] = {34,2,53,1,54,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,n);
    return 0;
}
// stock buy and sell
#include<iostream>
using namespace std;

int profit(int *arr, int n){
    int res = 0;
    for (int i = 1; i<n; i++)
        if (arr[i]>arr[i-1])
            res += arr[i]-arr[i-1];
    return res;
}

int main()
{
    int arr[] = {1,5,3,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum profit is "<<profit(arr,n);
    return 0;
}
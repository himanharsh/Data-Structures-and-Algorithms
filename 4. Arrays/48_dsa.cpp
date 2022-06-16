// prefix sum queries
#include<iostream>
using namespace std;

int query(int *arr, int n, int l, int r){
    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for (int i = 1; i<n; i++)
        prefix_sum[i] = arr[i] + prefix_sum[i-1];
    
    if(l!=0)
        return prefix_sum[r] - prefix_sum[l-1];
    return prefix_sum[r];
}

int main()
{
    int arr[] = {2,8,3,9,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<query(arr,n,2,6);
    return 0;
}
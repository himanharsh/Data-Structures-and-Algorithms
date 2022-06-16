// maximum difference from right to left
#include<iostream>
#include<cmath>
using namespace std;

int maxDiff(int *arr, int n){
    int res = arr[1]-arr[0];
    int minVal = arr[0];
    for (int i = 1; i<n; i++){
        res = max(res, arr[i]-minVal);
        minVal = min(arr[i], minVal);
    }
    return res;
}

int main()
{
    int arr[] = {2,3,10,6,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxDiff(arr,n);
    return 0;
}
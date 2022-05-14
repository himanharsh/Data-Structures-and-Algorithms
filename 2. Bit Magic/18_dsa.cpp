/*
Given an array of n numbers that has values in range [1......n+1]. Every number appears exactly once.
Hence one number is missing. Find the missing number.
*/
#include<iostream>
using namespace std;

int findMissing(int *arr, int n)
{
    int res = 0;
    for(int i = 1; i <= n+1; i++)
        res = res^i;
    for(int i = 0; i<n; i++)
        res = res^arr[i];
    return res;
}

int main()
{
    int arr[] = {1,2,3,4,5,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMissing(arr, n);
    return 0;
}
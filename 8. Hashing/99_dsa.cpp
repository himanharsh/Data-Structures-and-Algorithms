// longest subarray with equal 0's and 1's
#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;

int longestSubarraywith0and1(int *arr, int n){
    unordered_map<int,int>presum;
    for (int i = 0; i<n; i++)
        if (arr[i] == 0)
            arr[i] = -1;

    int sum = 0, maxlen = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
        if (sum == 0)
            maxlen = i+1;
        if (presum.find(sum) != presum.end())
            maxlen = max(maxlen, i-presum[sum]);
        else
            presum[sum] = i;
    }
    return maxlen;
}

int main()
{
    int arr[] = {1,0,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<longestSubarraywith0and1(arr,n);
    return 0;
}
// longest subarray with given sum
#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;

int longestSubarrayWithSumX(int arr[], int n, int sum)
{
    unordered_map<int,int> m;
    int presum = 0, res = 0;
    for (int i = 0; i<n; i++){
        presum += arr[i];
        if (presum == sum) res = i+1;
        if (m.find(presum) == m.end())
            m.insert({presum,i});
        if (m.find(presum-sum) != m.end())
            res = max(res, i-m[presum-sum]);
    }
    return res;
}

int main()
{
    int arr[] = {8,3,1,5,-6,6,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 4;
    
    cout << longestSubarrayWithSumX(arr, n, sum);
    return 0;
}
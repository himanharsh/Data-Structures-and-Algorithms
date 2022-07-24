// subarray with 0 sum
#include<iostream>
#include<unordered_set>
using namespace std;

bool ZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> us;
    int prefix_sum = 0;
    for(int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if(us.find(prefix_sum) != us.end())
            return true;
        if (prefix_sum == 0)
            return true;
        us.insert(prefix_sum);
    }
    return false;   
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << ZeroSumSubarray(arr, n);
    return 0;
}
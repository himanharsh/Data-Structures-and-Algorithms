// pair with given sum
#include<iostream>
#include<unordered_set>
using namespace std;

bool pairWithSumX(int arr[],int n, int X)
{
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
    {
        if(us.find(X - arr[i]) != us.end())
            return true;
        us.insert(arr[i]);
    }
    return false;
}

int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 14;
    
    cout << pairWithSumX(arr, n, X);
    return 0;
}
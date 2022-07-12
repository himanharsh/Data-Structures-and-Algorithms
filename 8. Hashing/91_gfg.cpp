// count distinct elements
#include<iostream>
#include<unordered_set>
using namespace std;

int countDistinct(int *arr, int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
}

int main()
{
    int arr[] {10,10,34,343,23,5,23,545,234,55,55,55,53};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<countDistinct(arr,n);
    return 0;
}
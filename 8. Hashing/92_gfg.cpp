// count frequency of elements
#include<iostream>
#include<unordered_map>
using namespace std;

void countFreq(int *arr, int n){
    unordered_map<int,int> m;
    for (int i = 0; i<n; i++)
        m[arr[i]]++;
    for (auto e: m)
        cout<<e.first<<" "<<e.second<<endl;
}

int main()
{
    int arr[] {10,10,34,343,23,5,23,545,234,55,55,55,53};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);
    return 0;
}
// left rotate by d
#include<iostream>
#include<algorithm>
using namespace std;

void rev(int *arr, int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void lrotate(int *arr, int n, int d){
    d = d%n;
    rev(arr,0,d-1);
    rev(arr,d,n-1);
    rev(arr,0,n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 99;
    lrotate(arr,n,d);
    for(int x:arr)
        cout<<x<<" ";    
    return 0;
}
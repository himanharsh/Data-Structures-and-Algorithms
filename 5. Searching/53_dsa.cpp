// index of first occurrence in a sorted array
#include<iostream>
using namespace std;

int firstOcc(int *arr, int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid]>x)
            high = mid-1;
        else if (arr[mid]<x)
            low = mid+1;
        else{
            if (mid==0 || arr[mid-1] != arr[mid])
                return mid;
            else
                high = mid-1; // going to left half
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,10,10,10,20,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;

    int result = firstOcc(arr,n,x);
    (result != -1)?cout<<"The first occurrence index of "<<x<<" is "<<result:cout<<"Number not found";
    return 0;
}
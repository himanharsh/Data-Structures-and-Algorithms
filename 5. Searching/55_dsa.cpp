// count occurrences in a sorted array
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

int lastOcc(int *arr, int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid]>x)
            high = mid-1;
        else if (arr[mid]<x)
            low = mid+1;
        else{
            if (mid==n-1 || arr[mid+1] != arr[mid])
                return mid;
            else
                low = mid+1; // going to right half
        }
    }
    return -1;
}

int countOcc(int *arr, int n, int x){
    int first = firstOcc(arr,n,x); // first occurrence
    if (first == -1)
        return -1;
    else
        return (lastOcc(arr,n,x) - first + 1);
}

int main()
{
    int arr[] = {1,10,10,10,20,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;

    int result = countOcc(arr,n,x);
    (result != -1)?cout<<"The frequency of "<<x<<" is "<<result:cout<<"Number not found";
    return 0;
}
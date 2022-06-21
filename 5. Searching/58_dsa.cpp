// search in an infinte sorted array
#include<iostream>
using namespace std;

int binarySearch(int *arr, int x, int low, int high){
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int search(int *arr, int x){
    if (arr[0] == x)
        return 0;
    int i = 1;
    while(arr[i]<x)
        i = i*2;
    if (arr[i] == x)
        return i;
    return binarySearch(arr,x,i/2+1,i-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,15,19,21,23,43,67,87,98,243,546,7786,23232,45455,76677,98988};
    int x = 67;
    int result = search(arr,x);
    (result != -1)?cout<<"The index of "<<x<<" is "<<result:cout<<"Number not found";
    return 0;
}
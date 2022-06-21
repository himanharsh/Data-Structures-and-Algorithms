// find a peak element (any random peak)
#include<iostream>
using namespace std;

int peak(int *arr, int n){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if ((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;
        if (mid>0 && arr[mid-1]>=arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int main()
{
    int arr[] = {5,10,20,15,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = peak(arr,n);
    (result != -1)?cout<<"The index of peak element is "<<result:cout<<"Peak not found";
    return 0;
}
// count 1's in a sorted array
#include<iostream>
using namespace std;

int countOnes(int *arr, int n){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == 0)
            low = mid+1; // going to right half
        else{
            if (mid==0 || arr[mid-1] == 0) // first occurrence
                return n-mid;
            else
                high = mid-1; // goint to left half to find the first occurrence of 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0,0,0,0,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"There are "<<countOnes(arr,n)<<" 1's in this array";
    return 0;
}
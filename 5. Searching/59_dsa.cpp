// search in a sorted rotated array
#include<iostream>
using namespace std;

int search(int *arr, int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[low]<arr[mid]) // left half sorted
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else{ // right half sorted
            if (x > arr[mid] && x <= arr[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,40,60,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    int result = search(arr,n,x);
    (result != -1)?cout<<"The index of "<<x<<" is "<<result:cout<<"Number not found";
    return 0;
}
// iterative binary search
#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int x){
    int low = 0, high = n-1;
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

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 12;
    int result = binarySearch(arr,n,x);

    (result != -1)?cout<<"The index of "<<x<<" is "<<result:cout<<"Number not found";
    return 0;
}
// recursive binary search
#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int low, int high, int x){
    if (low>high)
        return -1;
    int mid = (low+high)/2;
    if (arr[mid]==x)
        return mid;
    else if (arr[mid]>x)
        return binarySearch(arr,n,low,mid-1,x);
    else
        return binarySearch(arr,n,mid+1,high,x);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int low = 0, high = n-1;
    int result = binarySearch(arr,n,low,high,x);

    (result != -1)?cout<<"The index of "<<x<<" is "<<result:cout<<"Number not found";
    return 0;
}
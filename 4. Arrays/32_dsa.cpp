// move all zeroes to the end
#include<iostream>
#include<algorithm>
using namespace std;

void moveZeroes(int *arr, int n){
    int count = 0; // count of non-zero elements
    for (int i = 0; i<n; i++){
        if (arr[i] != 0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[] = {10,8,0,0,12,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZeroes(arr,n);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
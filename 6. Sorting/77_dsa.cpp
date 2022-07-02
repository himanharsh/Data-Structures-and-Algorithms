// segragate positive and negative
#include<iostream>
#include<algorithm>
using namespace std;

void segregate(int *arr, int n){
    int i=-1,j=n; // using Hoare's partition variation
    while(true)
    {
        do{i++;}while(arr[i]<0);// -ve on left
        do{j--;}while(arr[j]>=0);// +ve on right
        if(i>=j)return;
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[]={13,-12,18,-10,23,48,12,-90};
	int n=sizeof(arr)/sizeof(arr[0]);
	segregate(arr,n);
	for(int x:arr)
	    cout<<x<<" ";
    return 0;
}
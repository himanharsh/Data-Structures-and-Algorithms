// segregate 0's, 1's and 2's
#include<iostream>
using namespace std;

void one23(int *arr, int n){
    int l=0,h=n-1,mid=0;
    while(mid<=h){
        switch(arr[mid]){
            case 0:
                swap(arr[l],arr[mid]);
                l++;mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[h],arr[mid]);
                h--;
                break;
        }
    }
}

int main()
{
    int arr[]={0,1,1,2,0,1,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	one23(arr,n);
	for(int x:arr)
	    cout<<x<<" ";
    return 0;
}
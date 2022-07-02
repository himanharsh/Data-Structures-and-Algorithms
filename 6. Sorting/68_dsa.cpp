// merge sort
#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int h){
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}

void mergeSort(int *arr, int l, int h){
    if (l<h){
        int m = l + (h-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}

int main()
{
    int arr[] = {65,32,99,147,258,369,121,45,57,29};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
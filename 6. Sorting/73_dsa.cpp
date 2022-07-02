// quick sort using Hoare's partition
#include<iostream>
#include<algorithm>
using namespace std;

int Hpartition(int *arr, int l, int h){
    int pivot = arr[l];
    int i = l-1, j = h+1;
    while(true){
        do{i++;}while(arr[i] < pivot);
        do{j--;}while(arr[j] > pivot);
        if (i>=j) return j;
        swap(arr[i], arr[j]);
    }
}

void qSort(int *arr, int l, int h){
    if (l<h){
        int p = Hpartition(arr,l,h);
        qSort(arr,l,p);
        qSort(arr,p+1,h);
    }
}

int main()
{
    int arr[] = {65,32,99,147,258,369,121,45,57,29};
    int n = sizeof(arr)/sizeof(arr[0]);
    qSort(arr,0,n-1);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
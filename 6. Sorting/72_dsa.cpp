// quick sort using lomuto's partition
#include<iostream>
#include<algorithm>
using namespace std;

int Lpartition(int *arr, int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j = l; j<=h-1; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void qSort(int *arr, int l, int h){
    if (l<h){
        int p = Lpartition(arr,l,h);
        qSort(arr,l,p-1);
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
// majority element
#include<iostream>
using namespace std;

int majority(int *arr, int n){
    int res = 0, count = 1;
    for (int i = 1; i<n; i++){
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count==0){res = i; count = 1;}
    }
    count = 0;
    for (int i = 0; i<n; i++)
        if (arr[res]==arr[i])
            count++;
    if (count<=n/2)
        res = -1;
    return res;
}

int main()
{
    int arr[] = {8,7,6,8,6,6,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = majority(arr,n);
    cout<<arr[index];
    return 0;
}
// maximum circular subarray sum
#include<iostream>
#include<cmath>
using namespace std;

int normalMax(int *arr, int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i<n; i++){
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}

int overallMax(int *arr, int n){
    int max_normal = normalMax(arr,n);
    if (max_normal<0)
        return max_normal;
    
    int arr_sum = 0;
    for (int i = 0; i<n; i++){
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMax(arr,n);
    return max(max_normal,max_circular);
}

int main()
{
    int arr[] = {8,-4,3,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<overallMax(arr,n);   
    return 0;
}
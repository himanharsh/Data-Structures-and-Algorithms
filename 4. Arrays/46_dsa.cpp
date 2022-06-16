//maximum sum of k consecutive elements
#include<iostream>
#include<cmath>
using namespace std;

int ksum(int *arr, int n, int k){
    int curr_sum = 0;
    for (int i = 0; i<k; i++)
        curr_sum += arr[i];
    int max_sum = curr_sum;
    for (int i = k; i<n; i++){
        curr_sum += arr[i]-arr[i-k];
        max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}

int main()
{
    int arr[] = {1,8,30,-5,20,7};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<ksum(arr,n,k);
    return 0;
}
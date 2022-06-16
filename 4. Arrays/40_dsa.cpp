// maximum consecutive 1's in binary representation
#include<iostream>
#include<cmath>
using namespace std;

int mxcon1(int *arr, int n){
    int res = 0;
    int curr = 0;
    for (int i = 0; i<n; i++){
        if (arr[i] == 0)
            curr = 0;
        else{
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}

int main()
{
    int arr[] = {0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<mxcon1(arr,n);
    return 0;
}
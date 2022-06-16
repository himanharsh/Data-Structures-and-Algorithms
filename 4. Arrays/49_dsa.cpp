// equilibrium point
#include<iostream>
using namespace std;

bool isEqPoint(int *arr, int n){
    int sum = 0;
    for (int i = 0; i<n; i++)
        sum += arr[i];
    int lsum = 0;
    for (int i = 0; i<n; i++){
        if (lsum == sum-arr[i])
            return true;
        lsum += arr[i];
        sum -= arr[i];
    }
    return false;
}

int main()
{
    int arr[] = {3,4,8,-9,20,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool res = isEqPoint(arr,n);
    res==1?cout<<"Yes":cout<<"No";
    return 0;
}
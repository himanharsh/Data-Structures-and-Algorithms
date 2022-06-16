//maximum appearing element in given ranges
//0 <= (L[i],R[i]) < 1000
#include<iostream>
#include<vector>
using namespace std;

int maxOcc(int *L, int *R, int n){
    vector<int>arr(1000);
    for (int i = 0; i<n; i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxm = arr[0], res = 0;
    for (int i = 1; i<1000; i++){
        arr[i] += arr[i-1];
        if (maxm<arr[i])
        {maxm = arr[i]; res = i;}
    }
    return res;
}

int main()
{
    int L[] = {1,2,3};
    int R[] = {3,5,7};
    int n = sizeof(L)/sizeof(L[0]);
    cout<<maxOcc(L,R,n);
    return 0;
}
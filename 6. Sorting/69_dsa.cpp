// intersection of two sorted arrays
#include<iostream>
using namespace std;

void intersection(int *a, int *b, int m, int n){
    int i = 0, j = 0;
    while(i<m && j<n){
        if (i>0 && a[i] == a[i-1]){i++; continue;}// condition only for a bcoz we're getting output only from a
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {10,20,20,40,60};
    int b[] = {2,20,20,20,20};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    intersection(a,b,m,n);
    return 0;
}
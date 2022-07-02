// union of two sorted arrays
#include<iostream>
using namespace std;

void Union(int *a, int *b, int m, int n){
    int i = 0, j = 0;
    while(i<m && j<n){
         if (i>0 && a[i] == a[i-1]){i++; continue;} // we're printing from both
         if (j>0 && b[i] == b[i-1]){j++; continue;} // so both have repeat check condition

         if (a[i] < b[j]){cout<<a[i]<<" "; i++;}
         else if (a[i] > b[j]){cout<<b[j]<<" "; j++;}
         else {cout<<a[i]<<" ";i++;j++;}
    }
    while(i<m)
        if (i>0 && a[i] != a[i-1]){cout<<a[i]<<" ";i++;}
    while(i<m)
        if (i>0 && a[i] != a[i-1]){cout<<a[i]<<" ";i++;}
}

int main()
{
    int a[] = {10,20,20,40,60};
    int b[] = {2,20,20,20,20};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    Union(a,b,m,n);
    return 0;
}
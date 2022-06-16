// N-bonacci
#include<iostream>
using namespace std;

void bonacci(int n, int m){
    int a[m] = {0};
    a[n-1] = 1;
    a[n] = 1;

    for (int i = n+1; i<m; i++)
        a[i] = 2*a[i-1] - a[i-n-1];

    for (int x:a)
        cout<<x<<" ";
}

int main()
{
    int n = 3, m = 8;
    bonacci(n,m);
    return 0;
}
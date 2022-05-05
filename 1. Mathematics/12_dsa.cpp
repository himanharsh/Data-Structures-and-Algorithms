// Iterative Power
#include<iostream>
using namespace std;

int power(int x, int n){
    int res = 1;
    while(n>0)
    {
        // if (n%2 != 0)
        if (n&1) // returns non-zero when n is odd
            res = res*x;
        x = x*x;
        n = n/2; // n = n>>1
    }
    return res;
}

int main()
{
    int x, n;
    cout<<"Enter the number and power: ";
    cin>>x>>n;
    cout<<power(x,n);
    return 0;
}
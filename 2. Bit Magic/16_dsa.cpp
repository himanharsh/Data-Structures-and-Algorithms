// Power of 2 check
#include<iostream>
using namespace std;

bool isPow2(int n){
    if (n==0)
        return false;
    return ((n & (n-1)) == 0);
}

int main()
{
    int n = 128;
    bool res = isPow2(n);
    if (res)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
// Count Set Bits
// Brian Kerningam's Algorithm
#include<iostream>
using namespace std;

int countBits(int n){
    int res = 0;
    while(n>0){
        n = (n & (n-1));
        res++;
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<countBits(n);
    return 0;
}
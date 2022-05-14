// Count Set Bits
// Lookup Table Method for 32 bit numbers
#include<iostream>
using namespace std;

int table[256];
void initialize(){
    table[0] = 0;
    for (int i = 1; i<256; i++)
        table[i] = (i&1) + table[i/2]; // right shift recursively
}

int countBits(int n){
    int res = table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    return res;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    initialize();
    cout<<countBits(n);
    return 0;
}
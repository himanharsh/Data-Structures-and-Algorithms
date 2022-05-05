// Trailing Zeroes in Factorial
#include<iostream>
using namespace std;

int countTrailingZeroes(int n){
    int res = 0;
    for (int i = 5; i<=n; i*=5)
        res += n/i;
    return res;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number of zeroes in "<<n<<" is "<<countTrailingZeroes(n);
    return 0;
}
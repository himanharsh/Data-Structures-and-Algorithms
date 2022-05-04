// finding number of digits in a number
#include<iostream>
#include<cmath>
using namespace std;

// iterative solution
int countDigit(long n){
    int count = 0;
    while (n!=0)
    {
        n /= 10;
        count++;
    }
    return count;
}



int main()
{
    long n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<countDigit(n);
    return 0;
}
// finding number of digits in a number
#include<iostream>
#include<cmath>
using namespace std;

// iterative solution
// int countDigit(long n){
//     int count = 0;
//     while (n!=0)
//     {
//         n /= 10;
//         count++;
//     }
//     return count;
// }

// recursive solution
// int countDigit(long n){
//     if (n==0)
//         return 0;
//     return 1 + countDigit(n/10);
// }

// Logarithmic Solution
int countDigit(long n){
    return floor(log10(n)) + 1;
}

int main()
{
    long n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<countDigit(n);
    return 0;
}
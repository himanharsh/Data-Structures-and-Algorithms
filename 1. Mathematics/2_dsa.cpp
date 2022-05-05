// Palindrome Number
#include<iostream>
using namespace std;

bool isPal(int n){
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int ld = temp%10;
        rev = rev*10 + ld;
        temp /= 10;
    }
    return (rev==n);
}

int main()
{
    long n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<isPal(n);
    return 0;
}
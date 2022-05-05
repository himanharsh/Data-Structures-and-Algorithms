#include<iostream>
using namespace std;

// iterative solution
// long long fact(int n){
//     long long res = 1;
//     for (int i = 2; i <= n; i++)
//         res = res*i;
//     return res;
// }

// recursive solution
long long fact(int n){
    if (n==0)
        return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
    return 0;
}
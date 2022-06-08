// Josephus Problem
#include<iostream>
using namespace std;

int jos(int n, int k){
    if (n==1)
        return 0;
    return (jos(n-1,k)+k)%n;
}

int myjos(int n, int k){
    return jos(n,k)+1;
}

int main()
{
    int n, k;
    cout<<"Enter the number of soldiers in the circle: ";
    cin>>n;
    cout<<"Enter the killing position: ";
    cin>>k;
    cout<<"Position number "<<myjos(n,k)<<" is safe";
    return 0;
}
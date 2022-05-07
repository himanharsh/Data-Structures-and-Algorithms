// Check if kth bit is set
#include<iostream>
using namespace std;

//Left shift method
void kthBit(int n, int k){
    if ((n & (1<<(k-1))) != 0)
        cout<<"Yes";
    else
        cout<<"No";
}

// Right shift method
// void kthBit(int n, int k){
//     if (((n>>(k-1)) & 1) == 1)
//         cout<<"Yes";
//     else
//         cout<<"No";
// }

int main()
{
    int n = 5, k = 3;
    kthBit(n,k);
    return 0;
}
// Tower of Hanoi
#include<iostream>
using namespace std;

void toh(int n, char A, char B, char C){// from, aux, to
    if (n==1){
        cout<<"Move disc 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    toh(n-1,A,C,B);
    cout<<"Move disc "<<n<<" from "<<A<<" to "<<C<<endl;
    toh(n-1,B,A,C);
}

int main()
{
    char A = 'A', B = 'B', C = 'C';
    int n;
    cout<<"Enter the number of discs: ";
    cin>>n;
    toh(n,A,B,C);
    return 0;
}
// given a sorted array and a sum, find if there is a pair with the given sum.
#include<iostream>
using namespace std;

bool isPair(int *arr, int n, int x){
    int left = 0, right = n-1;
    while(left<right) // two separate left and right (can't be equal)
    {
        if (arr[left]+arr[right] == x)
            return true;
        else if (arr[left]+arr[right] > x)
            right--;
        else
            left++;
    }
    return false;
}

int main()
{
    int arr[] = {2,5,8,12,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 17;
    bool result = isPair(arr,n,x);
    (result == 1)?cout<<"Yes":cout<<"No";
    return 0;
}
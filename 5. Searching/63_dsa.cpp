// repeating element
#include<iostream>
using namespace std;

int repeating(int *arr, int n){
    bool visited[n-1] = {0};
    for (int i = 0; i<n; i++){
        if (visited[arr[i]])
            return arr[i];
        visited[arr[i]] = true;
    }
    return -1;
}

int main()
{
    int arr[] = {0,2,1,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = repeating(arr,n);
    (result != -1)?cout<<"The repeating element is "<<result:cout<<"No repeating element is present";
    return 0;
}
// count distinct elements in every window
#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n, int k)
{
    unordered_map<int, int> m; 
    for (int i = 0; i < k; i++)
        m[arr[i]]++;
   
    cout << m.size() << " "; 
   
    for (int i = k; i < n; i++) { 
        m[arr[i-k]]--;
        if (m[arr[i-k]] == 0) 
            m.erase(arr[i-k]); 
        m[arr[i]]++; 
   
        cout << m.size() << " "; 
    }
}

int main()
{
    int arr[] = {10, 10, 5, 3, 20, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    printDistinct(arr, n, k);
}
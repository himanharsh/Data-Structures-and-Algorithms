// reverse words in a string
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    string s = "Welcome to Gfg";
    int n = s.length();
    cout<<"After reversing words in the string:"<<endl;

    int start = 0;
    for (int i = 0; i<n; i++){
        if (s[i] == ' '){
            reverse(s.begin()+start, s.begin()+i);
            start = i+1;
        }
    }
    reverse(s.begin()+start, s.end());
    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) 
        cout << s[i];
    return 0; 
} 
// Palindrome checking using recursion
#include<iostream>
using namespace std;

bool isPalindrome(string &s, int start, int end){
    if (start>=end)
        return true;
    return (s[start] == s[end]) && isPalindrome(s,start+1,end-1);
}

int main()
{
    string s = "abba";
    int start = 0;
    int end = s.length()-1;
    bool res = isPalindrome(s,start,end);
    if (res)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
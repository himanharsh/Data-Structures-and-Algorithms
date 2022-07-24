// Check if a String is Subsequence of Other (iterative)
#include<iostream>
#include<cstring>
using namespace std;

bool isSubSeq(string s1, string s2, int n, int m){
    int j = 0;
    
    for(int i = 0; i < n && j < m; i++){
        if(s1[i] == s2[j])
        j++;
    }
    return j == m;
}

int main()
{
	string s1, s2;
	cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();
	cout<<boolalpha<<isSubSeq(s1, s2, n, m); // boolalpha to convert 1 to true and 0 to false 
    return 0;
}
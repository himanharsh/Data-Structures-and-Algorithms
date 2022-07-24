// leftmost repeating character
#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{
    bool visited[CHAR] = {0};
    int res= -1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]])
            res=i;
        else
            visited[str[i]]=true;
    }
    return res;
}
 
int main() 
{ 
    string str = "hgeeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    return 0; 
} 
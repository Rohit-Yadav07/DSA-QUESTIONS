#include<bits/stdc++.h>
using namespace std;
int scoreOfString(string s) {
    int ans;
    for (int i = 0; i < s.length()-1; i++)
    {
        ans+=abs(s[i+1]-s[i]);
    }
    return ans;
}
int main(){
    string s="hello";
    cout<<scoreOfString(s);
}

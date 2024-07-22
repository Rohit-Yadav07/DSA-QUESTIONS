#include <bits/stdc++.h>
using namespace std;
int appendCharacters(string s, string t) {
    int n=s.length();
    int m=t.length();
    int count=m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i]==t[j])
            {
                count--;
            }
            
        }
        
    }
    
        
    }

int main() {
    string s="z",t="abcde";
    cout<<appendCharacters(s,t);
    return 0;
}
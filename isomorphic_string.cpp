#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) {
    int n=s.length();
    int m=t.length();
    unordered_map<char,char> map1;
    unordered_map<char,char> map2;
    if (s.length()!=t.length())
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (map1.count(s[i]))
        {
            if (map1[s[i]]!=t[i])
            {
                return 0;
            }
            
        }
        else if (map2.count(t[i]))
        {
            return 0;
        }
        map1[s[i]]=t[i];
        map2[t[i]]=s[i];
    }
    return 1;
}
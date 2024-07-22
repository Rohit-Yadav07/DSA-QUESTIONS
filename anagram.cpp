#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    int n=s.length()-1;
    int m=s.length()-1;
      map<char,int> hash;
      if (n!=m)
      {
        return 0;
      }
      for (int i = 0; i < s.length()-1; i++)
      {
        hash[s[i]]++;
      }
      for (int i = 0; i < m; i++)
      {
        if (hash.count(t[i]))
        {
            hash[t[i]]--;
             if (hash[t[i]] == 0) {
                hash.erase(t[i]); 
            }
        }
      }
      return hash.empty();
      
    }
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    map<int,int> hash;
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
       hash[a[i]]++;
    }
    int testcases;
    cin>>testcases;
    while (testcases--)
    {
        int x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
    
}
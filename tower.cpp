#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
       int n,m;
       cin>>n>>m;
       if(n>=m&&(n%2==m%2)){
        cout<<"Yes"<<endl;
       }
       else
       {
        cout<<"No"<<endl;
       }
       
    }
    return 0;
}
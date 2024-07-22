#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
void rohit()
{
int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[x]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(v[i]==2){
            ans++;
        }
    }
    cout<<ans<<endl;

}  
signed main()
{
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t; cin>>t;
  while(t--)
  rohit();

}
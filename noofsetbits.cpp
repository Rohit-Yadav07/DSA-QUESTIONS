#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0;
    int n=3;
    while (n>0)
    {
        if ((n&1)==1)
        {
            ans++;
        }
        n=n>>1;
    }
    cout<<ans;
    

}
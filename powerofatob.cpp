#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=1;
    int base=3;
    int n=3;
    while (n>0)
    {
        ans=ans*base;
        base=base*3;
        n=n>>1;
    }
    cout<<ans;

}
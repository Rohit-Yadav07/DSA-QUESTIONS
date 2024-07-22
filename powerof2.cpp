#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=128;
    // int count =0;
    // while (n>0)
    // {
    //     if (n&1==1)
    //     {
    //         count++;
    //     }
        
    //     n=n>>1;
    // }
    // cout<<count;
    // if (count==1)
    // {
    //     cout<<" TRUE";
    // }
    // else
    // {
    //     cout<<"FALSE";
    // }
    if ((n&(n-1))==0)
    {
       cout<<"t";
    }
    else
    {
        cout<<"f";
    }
    
    return 0;
}
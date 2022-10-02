#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    if (n<=0)
    {
        cout<<" Error-> Please enter +ve Number ";
    }
    while (n!=0)
    {
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
    
    return 0;
}
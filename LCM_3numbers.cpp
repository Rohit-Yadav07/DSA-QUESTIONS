#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b,c;
    cin>>a>>b>>c;
    set<int, greater<int>> set1;
    set<int> set2;
    for (int i = 1; i <=c; i++)
    {
        set2.insert(i*3);
        set2.insert(i*5);
    }
    int it=*next(set2.begin(),c);
    for (int i = 0; i<=it; i++)
    {
        if (i%3==0&&i%5==0)
        {
            set1.insert(i);
        }   
    }
    for (auto i : set1)
    {
        cout<<i<<" ";
    }
    
}
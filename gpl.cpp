#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
while (n--){
	int num;
	cin >> num;
    string s;
    cin>>s;
    int ans;
    long long int res=0;
    long long power=1;
    for (int i = s.length()-1; i >=0; i--)
    {
        int ans=s[i]-'0';
        res=res+(ans*power);
        power=power*2;

    }
    cout<<res<<endl;  

}}
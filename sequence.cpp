#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
while (n--){
	int num;
	cin >> num;
int a;
int ans=1;
for(int i=0;i<num;i++){
	cin>>a;
	ans=ans*a;
}
if(ans%10==2||ans%10==3||ans%10==5){
	cout<<"YES"<<endl;
}
else{
	cout<<"NO"<<endl;
}
}
}
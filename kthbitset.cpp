#include<iostream>
using namespace std;
void kthbit(int n,int k)
{
    cout<<"before the operation "<<n<<" "<<k<<endl;
     cout<<(n|(1<<k));
}
int main(){
kthbit(679,2);
return 0;
} 
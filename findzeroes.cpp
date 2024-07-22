#include<iostream>
using namespace std;
int findzeroes(int n){
    int count=0;
    while (n!=0)
    {
        if(n%10==0)
        {
          count++;
          n=n/10;
        }
        else
        n=n/10;
    }
    return count;
}
int main(){
int n=32000504;
string num;
num=to_string(n);
cout<<sizeof(num)/sizeof(int)<<endl;
cout<<findzeroes(n);
return 0;
}
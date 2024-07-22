#include<iostream>
using namespace std;
void countint(int n)
{
    string num= to_string(n);
    cout<<"Number of integers "<<num.size()<<endl;
}
int main()
{
    int n=3456456567;
    cout<<"Enter a number"<<endl;
    // cin>>n;
    countint(n);
    int reverse=0;
    int remainder;
    while (n!=0)
    {
        remainder=n%10;
        n=n/10;
        reverse=reverse*10 + remainder;
    }
    cout<<reverse;
    
return 0;
}
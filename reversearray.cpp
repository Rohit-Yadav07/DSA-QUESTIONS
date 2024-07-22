#include<iostream>
using namespace std;
void Reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int temp,temp2;
  for (int i = 0; i < n; i++)
  {
    if (start<=end)
    {
    swap(arr[start],arr[end]);
    start++;
    end--;
    } 
    
    
  }
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main(){
    int n;
    cin>>n;
    int arr[n]={10,20,30,40,50};
    Reverse(arr,n);
    return 0;
}
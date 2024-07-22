#include <iostream>
using namespace std;
int main() {
  int temp;
 int arr[6]={1,2,3,4,5,6};
 for (int i = 0; i < 6; i++)
 {
  if (i%2!=0)
  {
    temp=arr[i-1];
    arr[i-1]=arr[i];
    arr[i]=temp;
  }
 }
 for (int i = 0; i < 6; i++)
 {
  cout<<arr[i];
 }
 
  return 0;
}
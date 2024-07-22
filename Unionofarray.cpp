#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    int arr[]={1,2,3,4,5,6};
    int brr[]={7,8,9,10};
    int sizea=sizeof(arr)/sizeof(int);
    int sizeb=sizeof(arr)/sizeof(int);
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

}
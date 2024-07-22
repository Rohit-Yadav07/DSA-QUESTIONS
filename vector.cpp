#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(50);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(30);
    arr.push_back(0);
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
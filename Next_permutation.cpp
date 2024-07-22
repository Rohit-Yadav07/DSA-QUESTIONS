#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &a) {
    int n = a.size();
    int point=-1;
    for (int i = n-1; i >=0; i--)
    {
        if (a[i]<a[i+1])
        {
            point=i;
           
        }
        break;
    }
    if (point==-1)
    {
        reverse(a.begin(),a.end());}
        return a;

    for (int i = n-1; i > point; i--)
    {
        if (a[i]>a[i+1])
        {
            swap(a[i],a[point]);
        }
        break;
    }
    reverse(a.begin()+point+1,a.end());
    return a; 
}
int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}

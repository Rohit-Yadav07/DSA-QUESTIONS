#include <bits/stdc++.h>
using namespace std;
// void printvec(vector<pair<int,int>> &v){
//     cout<<"size: "<<v.size()<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
// }

// int main() {
//     vector<pair<int,int>> v={{1,2},{2,4},{43,67}};
//     int input;
//     cin>>input;
//     for (int i = 0; i < input; i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     printvec(v);
    
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j<n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    
}
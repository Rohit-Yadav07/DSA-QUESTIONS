#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout<<min(n,m)<<" "<<max(n,m)<<endl;
    }
    return 0;
}

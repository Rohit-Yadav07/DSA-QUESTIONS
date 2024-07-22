#include<bits/stdc++.h>
using namespace std;
int timeRequiredToBuy(vector<int>& tickets, int k) {
    int count=0;
    int i=0;
    if(tickets.empty()){
        return 0;
    }
    while(tickets[k]!=0){
        if(tickets[i]>0){
            tickets[i]--;
            count++;
            i=(i+1)%tickets.size();
        }
        else if (tickets[i] == 0) {
                i = (i + 1) % tickets.size();
            }

}
        return count;
    
    
}
int main(){
    vector<int> t={2,3,2};
    int k=2;
    cout<<timeRequiredToBuy(t,k);
    return 0;
}
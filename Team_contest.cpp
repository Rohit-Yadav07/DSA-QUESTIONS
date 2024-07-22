#include "cp.cpp"
int team(vector <int> &skill, int n)
{
    int can=*min_element(skill.begin(),skill.end());
    cout<<"min is"<<can<<endl;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (skill[i]>2*can || skill[i]>can)
        {
            count++;
        }
        
    }
    return count;

}
int main(){
    vector<int> skill={4,100,49,201,100};
    int n=skill.size();
    cout<<team(skill,n);
}

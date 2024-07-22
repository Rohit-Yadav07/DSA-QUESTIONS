#include<bits/stdc++.h>
using namespace std;
int maximumSafenessFactor(vector<vector<int>>& grid) {
        int row=grid.size();
    int col=grid[0].size();
    int minans=INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j]==1)
            {
                minans=min(minans,(abs(0-i)+abs(0-j)));
            }
            
        }
        
    }
    return minans;  
    }
int main(){
    vector<vector<int>> grid={{0,0,1},{0,0,0},{0,0,0}};
    cout<<maximumSafenessFactor(grid);
}
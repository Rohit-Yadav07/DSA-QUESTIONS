#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),
        n = matrix[0].size(), row, col, mid, low = 0, high = m * n - 1; // low = lft and high = high here
        while (low <= high) 
        {
            mid = (low + high) / 2;
            row = mid / n; col = mid % n; // to find the index in the array
            if (target == matrix[row][col])
            {
                return true;
            }
            else if(target > matrix[row][col])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return false;
        
    }
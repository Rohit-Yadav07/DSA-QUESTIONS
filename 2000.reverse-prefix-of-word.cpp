/*
 * @lc app=leetcode id=2000 lang=cpp
 *
 * [2000] Reverse Prefix of Word
 */

// @lc code=start
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index;
        string ans (word.length()-1,' ');
        int n=0;
        for ( int i = 0; i < word.length(); i++)
        {
            if (word[i]==ch)
            {
                index=i;
            }
            
        }
        for (int j = index; j <=0;j--)
        {
            ans[n]=word[index];
            n++;
        }
        for (int x =index+1 ; x < word.length(); x++)
        {
            ans[x]=word[x];
        }
        return ans;
        
        
        
        
    }
};
// @lc code=end


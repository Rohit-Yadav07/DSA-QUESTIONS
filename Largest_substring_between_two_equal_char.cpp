#include "cp.cpp"
int maxLengthBetweenEqualCharacters(string s) {
    for (int i = 0; i < s.size(); i++)
    {
          for (int j  = s.size(); j >i; j--)
          {
            if (s[i]==s[j])
            {
                return j-i-1;
            } 
          }
    }
    return -1;
    }
int main(){
    string s="mgntdygtxrvxjnwksqhxuxtrv";
    cout<<maxLengthBetweenEqualCharacters(s);
}
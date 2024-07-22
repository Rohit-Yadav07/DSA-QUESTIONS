#include<bits/stdc++.h>
using namespace std;

bool checkvowels(vector<char> v,char a){
    for (int i = 0; i < v.size(); i++)
    {
        if (tolower(a)==v[i])
        {
            return 1;
        }
        
    }
    return 0;
    
}
bool checkcons(vector<char> v,char a){
    for (int i = 0; i < v.size(); i++)
    {
        if (tolower(a)==v[i])
        {
            return 1;
        }
        
    }
    return 0;
    
}
bool isValid(string word) {
    vector<char> v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    vector<char> cons = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    int vcount = 0;
    int ccount = 0;
    
    for (char c : word) {
         if (checkvowels(v,c)) {
            vcount++;
        } else if (checkcons(cons,c)) {
            ccount++;
        } else {
            return false; 
        }
    }
    
    return ((word.length()) >= 3)  && vcount >= 1 && ccount >= 1;
}

int main() {
    cout << isValid("234Adas") << endl;
    cout << isValid("b3") << endl;      
    cout << isValid("a3$e") << endl;    
    
    return 0;
}

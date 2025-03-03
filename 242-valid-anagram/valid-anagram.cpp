class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        unordered_map<char,int> n;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            n[t[i]]++;
        }
        return m==n;
    }
};
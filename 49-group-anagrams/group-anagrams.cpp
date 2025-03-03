class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto s:strs)
        {
            string hash="";
            vector<int> frq(26,0);
            for(auto ch:s) frq[ch-'a']++;
            for(int i=0;i<26;i++)
            {
                hash.push_back(frq[i]);
                hash.push_back('#');
            }
            m[hash].push_back(s);
        }
        vector<vector<string>> s;
        for(auto i:m)
        {
            s.push_back(i.second);
        }
        return s;
    }
};

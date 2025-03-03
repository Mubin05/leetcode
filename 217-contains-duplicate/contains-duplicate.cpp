class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int>m;
       int l=nums.size();
       for(int i=0;i<l;i++){
        m[nums[i]]++;
       }
       if(m.size()<l)
       return true;
       return false;
    }
};
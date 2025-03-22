class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // int n=nums.size()/2;
        // for(auto i:m){
        //     if(i.second>n)
        //     {
        //         return i.first;
        //     }
        // }
        // return -1;

        int cnt=0,el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el)cnt1++;
        }

        int n=nums.size()/2;
        if(cnt1>n){
            return el;
        }
        else{
            return -1;
        }
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length=nums.size();
        int sum=0,j,i;
       for(i=0;i<length-1;i++)
       {
        j=i+1;
        while(j<length)
        {
            sum=nums[i]+nums[j];
            if(sum==target)
            {
                return {i,j};
            }
            else
            {
                j++;
            }
        }
        
       }
       return {};
    }
};
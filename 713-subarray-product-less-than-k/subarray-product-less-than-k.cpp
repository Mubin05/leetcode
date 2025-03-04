class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int ans=0,prod=1,head=0,tail=0;
        for(head=0;head<nums.size();head++)
        {
            prod=prod*nums[head];
            while(prod>=k){
                prod=prod/nums[tail];
                tail++;
            }
            ans=ans+(head-tail+1);
        }
        return ans;
    }
};
#Problem:   https://leetcode.com/problems/find-the-duplicate-number/

##This dolution is in Floyd Cycle detection algorithm.  is this first array element will not be 0.


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int slow=nums[0];
        int fast=nums[0];
        do
        {
            slow = nums[slow];
            fast= nums[nums[fast]];
        }while(slow != fast);
        slow = nums[0];
        while(slow !=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
            
        }
        return(fast);
        
    }
};

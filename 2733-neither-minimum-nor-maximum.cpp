class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        n-=2;
        if(n<=0)
        return -1;
        else if((nums[0]>nums[1] && nums[0]<nums[2]) || (nums[0]<nums[1] && nums[0]>nums[2]))
        return nums[0];
        else if((nums[1]>nums[0] && nums[1]<nums[2]) || (nums[1]<nums[0] && nums[1]>nums[2]))
        return nums[1];
        else return nums[2];
    }
};
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        else{
            sort(nums.begin(),nums.end());
            for(int i=n;i>=3;i--)
            {
            if(nums[i-3] + nums[i-2] > nums[i-1]) return nums[i-3] + nums[i-2] + nums[i-1];
            }
        }
        return 0;
    }
};
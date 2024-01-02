class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> final;
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                final.push_back(i);
            }
        }
        return final;
    }
};
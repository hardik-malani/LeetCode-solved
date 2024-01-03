class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j] == nums1[i])
                final.push_back(nums2[j]);    
            }
        }
        sort(final.begin(),final.end());
        final.erase(unique(final.begin(),final.end()),final.end());
        return final;
    }
};
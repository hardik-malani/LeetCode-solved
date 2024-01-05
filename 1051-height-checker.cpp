class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> cp = heights;
        int count=0;
        sort(cp.begin(),cp.end());
        for(int i=0;i<cp.size();i++)
        {
            if(heights[i] != cp[i])count++;
        }
        return count;
    }
};
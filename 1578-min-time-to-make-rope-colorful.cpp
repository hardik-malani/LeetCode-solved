class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0,n = colors.size(),i=0;
        while(i<n){
            int mx = neededTime[i];
            int j = i+1,sum = mx;
            while(j < n and colors[i] == colors[j]){
                sum += neededTime[j];
                mx = max(mx,neededTime[j++]);
            }
            ans += (sum - mx);
            i = j;
        }
        return ans;
    }
};
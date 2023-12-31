class Solution {
public:
    double trimMean(vector<int>& arr) {
        double sum=0;
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=arr.size()/20;i<arr.size()-(arr.size()/20);i++)
        {
            sum+=arr[i];
            count++;
        }
        return sum/count;
    }
};
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0,prev=0,count=0;
        for(int i=0;i<bank.size();i++)
        {
            for(int j=0;j<bank[i].length();j++)
            {
                if(bank[i][j] == '1')
                {
                    count++;
                }
            }
            if(count!=0)
            {
                sum+=(prev*count);
                prev=count;
                count=0;
            }
        }
        return sum;
    }
};
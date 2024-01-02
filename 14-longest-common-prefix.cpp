class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int flag=0;
        sort(strs.begin(),strs.end());
        for(int i=0;i<strs[0].size();i++)
        {
            char k=strs[0][i];
            flag=0;
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=k){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            s+=k;
            else{
                break;
            }
        }
        return s;
    }
};
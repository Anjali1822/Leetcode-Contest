class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        int n1=A.size();
        int cnt=0;
        vector<int>ans(n1,0);
        for(int i=0;i<n1;i++)
        {
            mp[A[i]]++;
            cnt=0;
            for(int j=0;j<=i;j++)
            {
                if(mp.find(B[j])!=mp.end())
                {
                    cnt++;
                }
            }
            ans[i]=cnt;
        }
      
        return ans;
    }
};

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        for(int i=1;i<=k;i++)
        {
            sum+=nums[n-1];
            nums[n-1]+=1;
            
        }
       
       
        return sum;
    }
};

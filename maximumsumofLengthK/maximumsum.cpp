class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double ans=INT_MIN,sum=0;
        if(k==0)return 0;
        for(int i=0;i<k;i++)sum+=nums[i];

        ans=max(ans,sum/(double)k);
        for(int i=k;i<n;i++){
            
            sum=sum-nums[i-k];
            sum+=nums[i];
            ans=max(sum/(double)k,ans);
            
        }
        
        return ans;
    }
};
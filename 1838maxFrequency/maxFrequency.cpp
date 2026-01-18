class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=0,ans=0;
        long long sum=0;
        while(r<n){
            sum+=nums[r];
            while(l<r && (long long)nums[r]*(r-l+1)-sum>k){
                sum=sum-nums[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
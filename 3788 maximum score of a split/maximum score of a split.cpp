class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        // 10 9 12 8 3 
        int n=nums.size();
        
        vector<long long> prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        vector<long long> suffix(n);
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=min(suffix[i+1],nums[i]);
        }
        long long aans;
        for(int i=0;i<n;i++){
            aans=max(aans,prefix[i]-suffix[i]);
        }
        return aans;
    }
};
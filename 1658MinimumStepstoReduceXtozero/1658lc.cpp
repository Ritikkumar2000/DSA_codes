class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      int n=nums.size();
      vector<int> prefix;
      long long  sum=0;
      for(int i=0;i<n;i++)sum+=nums[i];  

      long long target=sum-x;
      int ans=-1;
      long long  windowsum=0;
      if(target<0)return -1;
      if(target==0)return n;
      for(int r=0,l=0;r<n;r++){
        windowsum=windowsum+nums[r];
        while(l<=r && windowsum>=target){
            if(windowsum==target)ans=max(ans,r-l+1);
            windowsum=windowsum-nums[l];
            l++;
        }
      }
      return ans==-1?-1:n-ans;
    }
};
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        // if(maxCost==0) return 0;
        int n=s.size(),cost=0,l=0,ans=0;
        for(int i=0;i<n;i++){
            cost+=abs(s[i]-t[i]);
            while(cost>maxCost){
                cost-=abs(s[l]-t[l]);
                l++;
            }

            ans=max(ans,i-l+1);
        }	
        // if(cost>maxCost)return 0;
        return ans;
    }
};
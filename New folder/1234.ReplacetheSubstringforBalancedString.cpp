class Solution {
public:
    int balancedString(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int least=n/4,l=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp['Q']==least && mp['W']==least && mp['E']==least && mp['R']==least)return 0;

        int r=0,ans=n;
        for(int r=0;r<n;r++){
            mp[s[r]]--;
            while(l<=r && (mp['Q']<=least && mp['W']<=least && mp['E']<=least && mp['R']<=least)){
                ans=min(ans,r-l+1);
                mp[s[l]]++;
                l++;
            }
        }
        
        return ans;
    }
};
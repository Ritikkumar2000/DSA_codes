class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int l=0,r=0;
        int ans=0,maxf=0;
        vector<int> freq(26,0);
        for(int r=0;r<n;r++){
            freq[answerKey[r]-'A']++;
            maxf=max(maxf,freq[answerKey[r]-'A']);
            while(r-l+1-maxf>k){
                freq[answerKey[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
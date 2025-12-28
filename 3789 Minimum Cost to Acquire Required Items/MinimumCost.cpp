class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans=0;
        if(need1>0 && need2>0 && costBoth<cost1+cost2){
            int common=min(need1,need2);
            ans+=1LL*costBoth*common;
            need1-=common;
            need2-=common;
        }
        if(need1>0){
            ans+=1LL*need1*min(cost1,costBoth);
        }
        if(need2>0){
            ans+=1LL*need2*min(cost2,costBoth);
        }
        return ans;
    }
};
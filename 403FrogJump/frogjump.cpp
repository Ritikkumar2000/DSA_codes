#include<bits/stdc++.h>
using namespace std;
//memoization
unordered_map<int,int> mp;
vector<vector<int>> dp;

bool check(vector<int> stones,int curridx,int prevjump){
	if(curridx==stones.size()-1){
		return  true;
	}
	if(dp[curridx][prevjump]!=-1)return  dp[curridx][prevjump];
	bool ans=false;
	
	for(int nextjump=prevjump-1;nextjump<prevjump+2;nextjump++){
		
			if(nextjump<=0)continue;
			int nextstone=stones[curridx]+nextjump;
			if(mp.find(nextstone)!=mp.end()){
				ans=ans||check(stones,mp[nextstone],nextjump);
				if(ans)break;
			

			}
		
	}
	return dp[curridx][prevjump]=ans;

}
bool canCross(vector<int>& stones) {
        int n=stones.size();
     
        if(stones[1]!=1)return false;
        for(int i=0;i<n;i++){
        	mp[stones[i]]=i;
        }
        dp.assign(n,vector<int>(n+1,-1));
        return check(stones,1,1);
    }
int main(){

	vector<int> v={0,1,2,3,4,8,9,11};
	cout<<canCross(v);
}
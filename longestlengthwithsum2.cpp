#include <bits/stdc++.h> //negatives included
using namespace std;
int getLongestSubarray(vector<int>& nums, int k){
    map<int,int> mpp;
    int maxlen=0,len=0,sum=0;

    for (int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        if(mpp.find(sum-k)!=mpp.end()){
            len=i-mpp[sum-k];
            maxlen=max(maxlen,len);
        }
        if (mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
    }
    return maxlen;
}
int max(int a,int b){
    return (a>b)?a:b;
}
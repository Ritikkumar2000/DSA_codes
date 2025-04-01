#include<bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int i,j,max_profit=0,n=prices.size();
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            if(prices[j+1]>prices[i]){
                max_profit=max(max_profit,prices[j+1]-prices[i]);
            }
        }
    }
    return max_profit;
}
int max(int a,int b){
    return (a>b)?a:b;
}
int main(){
    vector<int> a={1,2,3,4};
    cout<<maximumProfit(a)<<endl;
}
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(vector<int> nums){
    vector<vector<int>> subsets;
    sort(nums.begin(), nums.end());
    subsets.push_back(vector<int> {});
    int start=0,end=0;
    for(int i=0;i<nums.size();i++){
        start=((i>0)&&(nums[i]==nums[i-1])?end:0);
        end=subsets.size();
        for(int j=start;j<end;j++){
            vector<int> temp=subsets[j];
            temp.push_back(nums[i]);
            subsets.push_back(temp);
        }
    }
    return subsets;
}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = subset(nums);
    for (auto it:subsets){
        for (auto it1:it){
            cout<<it1<<",";
        }
        cout<<endl;
    }
    return 0;
}
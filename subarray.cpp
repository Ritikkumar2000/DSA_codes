#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

    vector<vector<int>> result;
    int i=0,a=0,j=0,n=nums.size();
    vector<int> temp;
    
    while(a<=n){        
        for(int j=a;j<n;j++){
            temp.push_back(nums[j]);
            // set1.insert(temp);
            auto it = find(result.begin(),result.end(), temp);
            if (it == result.end()) {
            
                result.push_back(temp);
                
            }           
        }
        temp.clear();
        a++;
    }
    result.push_back(vector<int>{});
    return result;
    }

    int main(){
        vector<int> nums = {1, 2, 3,4,5};
        vector<vector<int>> result = subsetsWithDup(nums);
        for (auto &v : result) {
            for (auto &x : v) {
                cout << x << " ";

    }cout<<endl;
        }
        return 0;
    }
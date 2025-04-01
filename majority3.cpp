#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> majority(vector<int> v){
            int cnt=0;
            vector<int> ls;
            int n=v.size();

            for (int i=0;i<n;i++)
            {
                if (ls.size()==0 || ls[0]!=v[i]){
                    cnt=0;
                    for(int j=0;j<n;j++){
                        if (v[i]==v[j])
                            cnt++;
                    }
                    if (cnt>n/3){ls.push_back(v[i]);
                }
                if (ls.size()==2)
                    return ls;
            }
        }
        return {};
}
};

int main(){
    Solution s;
    vector<int> v={1,4,4,4,5,5,5,4};
    vector<int> t=s.majority(v);
    for(auto it:t)
        cout<<it<<endl;
    return 0;
}
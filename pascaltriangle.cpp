#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> v;
        vector<vector<int>> final;

        for (int i=0;i<numRows;i++){
            for (int j=0;j<=i;j++){
                if (j==0 || j==i){
                    v.push_back(1);
                }
                else{
                    v.push_back(final[i-1][j]+final[i-1][j-1]);
                }
            }

            final.push_back(v);
            v.clear();
        
    }
    return final;
}
};
int main(){
    Solution solution;
    vector<vector<int>> t=solution.generate(5);
    for(auto it:t){
        for (auto temp:it)
            cout<<temp<<"\t";
        cout<<endl;}
    return 0;
}
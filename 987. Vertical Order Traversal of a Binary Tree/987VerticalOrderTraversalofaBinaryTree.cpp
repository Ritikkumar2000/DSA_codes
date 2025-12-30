/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,map<int,multiset<int>>> mp;
    void solve(TreeNode* root, int row,int col){
        if(!root){
            return;
        }
        mp[col][row].insert(root->val);
        solve(root->left,row+1,col-1);
        solve(root->right,row+1,col+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)return ans;
        int row=0,col=0;
        solve(root,row,col);
        for(auto &row:mp){
            vector<int> column;
            for(auto &col:row.second ){
                for(auto &ele:col.second){
                    column.push_back(ele);
                }
            }
            ans.push_back(column);
        }
        return ans;
    }
};
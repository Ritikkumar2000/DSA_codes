#include<bits/stdc++.h>
using namespace std;


    vector<int> searchRange(vector<int>& nums, int target) {
    
        int l=0,mid,n=nums.size(),r=n-1,sp=-1,ep=-1;
        
        while(l<=r){
            int mid = l + (r - l) / 2;;
            if (nums[mid]==target){
                sp=mid;
                r=mid-1;

            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        if (sp!=-1){
            ep=sp;
           int temp=sp;
            cout<<"here1"<<mid<<endl<<n<<endl;
            while(temp<n){
                cout<<"here1";
                if (nums[temp+1]==target){
                    cout<<"here1";
                ep++;             
                }
                temp++;
            }
        }
        vector<int> ans={sp,ep};
        return ans;
    }


int main(){
    vector<int> nums = {5,7,7,8,8,10};
    vector<int> ans=searchRange(nums,8);
    cout<<ans[0]<<" "<<ans[1]<<endl;;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int>& arr,int start,int end){
        while(start<=end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        return arr;
    }

vector<int> rotate(vector<int>& nums, int k) {

    reverse(nums,0,k-1);
    reverse(nums,k,nums.size()-1);
    return reverse(nums,0,nums.size()-1);

}
/*

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}
*/
        

int main(){
    vector<int> nums = {1, 2, 3, 4, 5,6,7};
    vector<int> res=rotate(nums,3);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}

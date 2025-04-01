
#include<bits/stdc++.h>
using namespace std;
void subseq(int ind, vector<int> &v,int arr[],int n){
    if (ind==n){
        for(auto  it:v)
            cout<<it<<" ";
    
        if (v.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
        }

subseq(ind+1,v,arr,n);
v.push_back(arr[ind]);
subseq(ind+1,v,arr,n);
v.pop_back();
}

int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    subseq(0,ds,arr,n);
    return 0;
}
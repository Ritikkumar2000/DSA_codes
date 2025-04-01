#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> &a) {
    // Write your code here.
    int ind,flag=0,temp;

    for(int i=0;i<n;i++){
        if (a[i]==0 && flag==0){
            ind=i;
            flag=1;
        }
        else if(a[i]!=0 && flag==1){
            temp=a[i];
            a[i]=a[ind];
            a[ind]=temp;

            if(a[ind+1]==0){
                ind=ind+1;
            }
        }
    }
    return a;
}


int main(){
    vector<int> arr={1,2,0,0,1,3,0};
    vector<int> res=moveZeros(7,arr);
    for (int i=0;i<res.size();i++){
        cout<<"\n"<<res[i];
    }
}

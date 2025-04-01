#include<bits/stdc++.h>
using namespace std;
int ceil(int it,int mid){
    float t=(float)it/mid;
    if(t!=(int)t) return (int)t+1;
    else return (int)t;
}
int ceiltime(vector<int> v,int mid){
    int n=v.size(),temp=0;
    for(auto it:v){
        temp=ceil(it,mid)+temp;
    }
    cout<<endl<<temp<<"  "<<mid;
    return temp;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int i=0,j=*max_element(v.begin(), v.end()),mid,ans,ansnew;

    while(i<=j){
        mid=i+(j-i)/2;
        ans=ceiltime(v,mid);
        if(ans<=h){
            ansnew=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ansnew;
}
int main(){
  vector<int> v={4,9,4,3,1,3};
  cout<<minimumRateToEatBananas(v,66);
}
#include<bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int i,n=a.size(),sum=0,sum1=0;
    vector<int> result;
    // Write your code here
    for(i=0;i<n;i++){
        sum=sum+(i+1);
    }

    for(i=0;i<n;i++){
        sum1=sum1+a[i];
    }
    int repeated=sum-sum1;
    int missing=sum-(sum1-(repeated));
    cout<<repeated<<endl<<missing;
    result.push_back(sum-sum1);// repeated
    result.push_back(missing);//missing
    return result;
}

int main(){
    vector<int> a = {1, 2, 3, 5, 6,6};
    vector<int> result=findMissingRepeatingNumbers(a);
    // for(auto it:result){
    //     cout<<it<<endl;
    // }
}
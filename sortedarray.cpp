#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0;i<n-1;i++){
        if (a[i+1]<a[i])
            return 0;
    }
    return 1;
}

int main(){
    vector <int> a={1,2,3,4,5};
    cout<<isSorted(5,a);
    return 0;
}
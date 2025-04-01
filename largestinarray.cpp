#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}


int main(){
    vector<int> a={2,3,4,5,6,23,4};
    cout<<"largest is "<<largestElement(a,7);
    return 0;
}
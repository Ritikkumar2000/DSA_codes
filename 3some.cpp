#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    vector<vector<int>> answer;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]=arr[i-1])continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if (sum==0){
                answer.push_back({arr[i],arr[j],arr[k]});
                
                j++;
                k--;
                while(arr[j]==arr[j+1])j++;
                while(arr[k]==arr[k-1])k--;
            }
            else if(sum>0){
                int end=k;
                while(k==end)k--;
            }
            else{
                int mid=j;
                while(j==mid)j++;
            }
        }

    }
    return answer;
}



// #include<bits/stdc++.h>
// using namespace std;
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     int i,max=0,count=0,sum=0;
//     int n=a.size();
//     for (i=0;i<n;i++){
//         if (sum==k){
//             if (a[i]==0){
//                 count++;
//             }
//             if (max<count)
//                 max=count;
//                 count=0;
//                 sum=0;
//         }
//         if (a[i]>k)
//             continue;
//         else
//             sum+=a[i];
//             count+=1;
                   
//         if (sum>k){
//             sum=0;
//             i--;
//             count=0;
            
//         }
//     }
//     return max;
// } 

#include<bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int count=0,sum=0,right=0,n=arr.size(),i=0;

    while(right<n){
        sum+=arr[i];
        while (sum>k){
            sum=sum-arr[right];
            right++;
        }
        if(sum==k){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    vector<int> v={1,1,2,2,3,4};
    cout<<findAllSubarraysWithGivenSum(v,4);
    return 0;
}
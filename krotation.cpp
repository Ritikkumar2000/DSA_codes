#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.    
    int i=0,n=arr.size(),j=n-1,mid,ind,min=INT_MAX;

    while(i<=j){
        mid=(i+j)/2;
        if(arr[i]<=arr[mid]){
            if(arr[i]<min){
                min=arr[i];
                ind=i;
            }
            else{
                if(arr[mid]<min){
                    min=arr[mid];
                    ind=mid;
                }
            }
        }
        else{
            if(arr[mid]<min){
                min=arr[mid];
                ind=mid;
            }
            else{
                if(arr[j]<min){
                    min=arr[j];
                    ind=j;
                }
            }
        }
    }
    return ind;
}
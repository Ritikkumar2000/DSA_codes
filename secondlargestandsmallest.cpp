#include <bits/stdc++.h> 
using namespace std;
int secondsmallest(vector<int> arr,int n){
    int small=INT_MAX,secondsmallest=INT_MAX;
    if (n<2)
        return -1;

   for(int i=0;i<n;i++){
    if(arr[i]<small){
        secondsmallest=small;
        small=arr[i];
    }
    else if(arr[i]<secondsmallest && arr[i]!=small){
        secondsmallest=arr[i];
    }
   }
   return secondsmallest;
}

int secondlargest(vector<int> arr,int n){
    int large=INT_MIN,secondlargest=INT_MIN;
    if (n<2)
        return -1;

   for(int i=0;i<n;i++){
    if(arr[i]>large){
        secondlargest=large;
        large=arr[i];
    }
    else if(arr[i]>secondlargest && arr[i]!=large){
        secondlargest=arr[i];
    }
   }
   return secondlargest;
}

int main(){
    vector<int> n={1,2,3,3};
    cout<<"sl"<<secondlargest(n,4)<<"\t"<<"ss"<<secondsmallest(n,4);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int i=0,j=n-1;
	if (arr[0]>x)return 0;
	else if(arr[n-1]<x)return n;
	int mid;
	while(i<=j){
        mid=(i+j)/2;
        
		if (arr[mid]>=x){
			j=mid-1;
		}
		else{i=mid+1;}
		

	}
    
    
	return mid;
}

int main(){
    vector<int> arr={1,2,2,3};
    cout<<lowerBound(arr,4,2);
}
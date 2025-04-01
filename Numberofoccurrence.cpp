#include<bits/stdc++.h>
using namespace std;

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int i=0,j=n-1,mid,ans=0,count1=0;

	while(i<=j){
		mid=(i+j)/2;
		if(arr[mid]>=x){
			ans=mid;
			j=mid-1;
		}
		else{
			i=mid+1;
		}
	}
	if(arr[ans]==x){
		count1=1;
	}
	if(mid<n-1){
		while(arr[mid+1]==x){
			cout<<"here"<<mid;
			count1++;
			mid++;
		}
	}
	return count1;
}

int main(){
	vector<int> a={1,1,1,2,2,3,3};
	cout<<count(a,7,3);
}
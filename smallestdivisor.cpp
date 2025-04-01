#include<bits/stdc++.h>
using namespace std;

int count(vector<int> v,int n){
	int count=0;
	for (auto it:v){
		count+=it/n;
	}
	cout<<"count for"<<n<<count<<endl;
	return count;
}
int max(vector<int> v){
	int max=INT_MIN;
	for(auto it:v){
		if( it>max){
			max=it;
		}
	}
	cout<<"max is"<<max;
	return max;
}
int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int i=0,n=arr.size(),j=max(arr),mid;

	while(i<=j){
		mid=(i+j)/2;
		if(count(arr,mid)<=limit){
			i=mid+1;
		}
		else{
			j=mid-1;
		}
	}
	return i;
}
int main(){
	vector<int> arr = {1, 2, 3, 4, 5};
	cout<<smallestDivisor(arr,8);
}
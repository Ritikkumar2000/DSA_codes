#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
	int xor1=0;
	int n=arr.size();
	for (int i=0;i<n;i++){
		xor1=xor1^arr[i];
	}
	return xor1;
}


int main(){

    vector<int> n={1,2,2,3,3};
    cout<<getSingleElement(n);
    return 0;
}
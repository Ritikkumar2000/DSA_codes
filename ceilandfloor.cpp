pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int l=0,r=n-1,ceil=n,floor=n,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]>=x){
			ceil=mid;
			l=mid-1;
		}
		else{r=mid+1;}
		
	}
	l=0;
	r=n-1;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]<=x){
			floor=mid;
			l=mid-1;
		}
		else{r=mid+1;}
		
	}
	return {floor,ceil};
}
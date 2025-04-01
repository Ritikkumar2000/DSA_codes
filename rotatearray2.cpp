#include<bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.

    int i=0,n=A.size(),j=n-1,mid;
    if (A[0]<A[n-1]){
      while (i <= j) {
        mid = (i + j) / 2;
        if(A[mid]==key){
            return true;
        }
        else if(A[mid]>key){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
      }
      return false;
    }
    else{
        i=0,j=n-1;
        //int temp=1;
        while(A[i]>A[j]){
            i++;
        }
        int temp=i-1;
        cout<<temp<<i<<endl;
               
        int m=0;
       
        if (key>=A[0] && key<=A[temp]){
    
        
        while(m<=temp){

            mid=(m+temp)/2;
            if (A[mid]==key){
                return true;
            }
            else if(A[mid]>key){
                temp=mid-1;
            } else {
                m = mid + 1;
            }
        }
       
        }
        else{
           
            temp++;
            while(temp<=j){
            mid=(j+temp)/2;
            if (A[mid]==key){
                return true;
            }
            else if(A[mid]>key){
                j=mid-1;
            }
            else{
                temp=mid+1;
            }
        }
        
        }
        return false;
    }
}


int main(){
    vector<int> arr={5,9,10,1};
    cout<<searchInARotatedSortedArrayII(arr,9);
}
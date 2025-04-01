#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int i=0,j=n-1,ans=-1,mid;
    if (arr[0]<arr[n-1]){
      while (i <= j) {
        mid = (i + j) / 2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
      }
      return ans;
    }
    else{
        i=0,j=n-1;
        //int temp=1;
        while(arr[i]>arr[j]){
            i++;
        }
        int temp=i-1;
               
        int m=0;
        //cout<<"here1"<<endl<<arr[0]<<endl<<k<<endl<<arr[temp];
        if (k>=arr[0] && k<=arr[temp]){
            //cout<<"here1";
        
        while(m<=temp){
            //cout<<"here";
            mid=(m+temp)/2;
            if (arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
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
            if (arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                j=mid-1;
            }
            else{;
                temp=mid+1;
            }
        }
        
        }
        return ans;
    }
}
int main(){
    vector<int> a={11,13,5,8,9,10};
    cout<<search(a,6,5);
}

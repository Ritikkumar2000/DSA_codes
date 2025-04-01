#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i=0,j=0,n=a.size(),m=b.size(),k=0;
    vector<int> arr;
    while(i<n&&j<m){
        if (a[i]<=b[j]){
            if (arr.empty() || arr.back()!=a[i]){                
                arr.push_back(a[i]);
                k++;                
            }
            i++;            
        }
        else{
            if (arr.empty() || arr.back()!=b[j]){               
                arr.push_back(b[j]);
                k++;                
            }
            j++;            
        }
        if (i==n || j==m)
            break;
    }
    if (i<n){
        while(i<n){
            if (arr.back()!=a[i]){                
                arr.push_back(a[i]);
                k++;                
            }
            i++;
        }        
    }
    else{
        while(j<m){
            if (arr.back()!=b[j]){                
                arr.push_back(b[j]);
                k++;                
            }
            j++;
        }
    }
    return arr;
}
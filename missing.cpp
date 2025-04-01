#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {
    int xor1=0,xor2=0;
    for(int i=0;i<N-1;i++){
        xor1=xor1^a[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^N;

    return(xor1^xor2);
}


/*

int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

*/

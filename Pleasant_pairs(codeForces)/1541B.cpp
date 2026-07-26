#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) (void)0
#endif
//#define all(v) v.begin(),v.end()
#define int long long int
//#define IMAX INT64_MAX
//#define IMIN INT64_MIN
#define endl "\n"
const int MOD =(int)1000000000+7;
using namespace std;
void cases();
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    clock_t z = clock();
#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r", stdin );
    freopen("output.txt", "w", stdout);
    freopen("error.txt" , "w", stderr);
#endif
    int T = 1;
    cin >> T;
    while (T--)
    {
        cases();
#ifndef ONLINE_JUDGE
cout << "____________________________________\n";
#endif
    }
    cerr << "Run time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
}
void cases()
{
    int n;
    cin>>n;
    // vector<int> v;
    vector<int> a(n+1,1);
    // vector<int> idx(1e5,-1);
    for(int i=1;i<n+1;i++){
        cin>>a[i];
        // idx[a[i]]=i;
    }
    int count=0;
    for(int i=1;i<n+1;i++){
        int first_j=a[i]-(i%a[i]);
        for(int j=first_j;j<n+1;j+=a[i]){
            if(j>i  &&  i+j==a[i]*a[j]){
                count++;
            }

        }
    }
    cout<<count<<endl;
    return ;
}
https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

int32_t main(){
    fast;
    cout<<fixed;
    cout<<setprecision(10);
    
    int n, k, w;
    cin>>k>>n>>w;
    
    int cost = 0, count = 0, ind;
    
    for(int i = 1; i <= w; i++)
        cost += i*k;
       
    if(cost <= n)
        cout<<"0";
    else
        cout<<cost-n;    
    
    return 0;
}

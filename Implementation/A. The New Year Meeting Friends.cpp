https://codeforces.com/problemset/problem/723/A

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
    
    int n = 3;
    vector<int>arr(n);
    
    for(int i = 0; i < n; i++)  
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    
    int ans = INT_MAX;
    
    for(int i = arr[0]; i < arr[n-1]; i++){
        int x = i;
        
        ans = min(ans, abs(x-arr[0])+abs(x-arr[1])+abs(x-arr[2]));
    }
    
    cout<<ans;
    
    return 0;
}

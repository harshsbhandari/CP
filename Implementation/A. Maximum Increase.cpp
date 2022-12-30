https://codeforces.com/problemset/problem/702/A

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
    
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i = 0; i < n; i++)
        cin>>arr[i];
        
    int ans = 1, count = 1;
    
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1])
            count++;
        else
            count = 1;
        
        ans = max(ans, count);
    }
    
    cout<<ans;
	
    return 0;
}

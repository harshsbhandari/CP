https://codeforces.com/problemset/problem/116/A

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
    
    vector<pair<int,int>>arr(n);
	
	for(int i = 0; i < n; i++){
	    int a, b;
	    cin>>a>>b;
	    // a - exit
	    // b - enter
	    
	    arr[i] = {a, b};
	}
	
	int count = 0, ans = INT_MIN;
	
	for(int i = 0; i < n; i++){
	    count -= arr[i].first;
	    count += arr[i].second;
	    ans = max(ans, count);
	}
	
	cout<<ans;
	
    return 0;
}

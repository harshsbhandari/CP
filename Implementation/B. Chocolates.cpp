https://codeforces.com/problemset/problem/1139/B

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
	   
	int count = 0, ind = INT_MAX;
	
	for(int i = n-1; i >= 0; i--){
	    if(arr[i] < ind){
            count += arr[i];
            ind = arr[i];
	    }
	    else{
	        if(ind > 0){
    	        ind--;
    	        count += ind;
	        }
	    }
	}
	
	cout<<count;
	
	
    return 0;
}

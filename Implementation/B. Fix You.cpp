https://codeforces.com/problemset/problem/1391/B

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
    
    
    int t;
    cin>>t;
    
    while(t--){
        int n, m;
        cin>>n>>m;
        
        vector<vector<char>>arr(n, vector<char>(m));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cin>>arr[i][j];
        }
        
        int count = 0;
    	
    	for(int i = 0; i < n; i++){
    	    if(arr[i][m-1] == 'R')
    	        count++;
    	}
    	
    	for(int j = 0; j < m; j++){
    	    if(arr[n-1][j] == 'D')
    	        count++;
    	}
    	
    	cout<<count;
    	
    	cout<<endl;
    }

    return 0;
}

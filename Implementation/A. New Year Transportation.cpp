https://codeforces.com/problemset/problem/500/A

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
    
    int n, t;
    cin>>n>>t;
    
    vector<pair<int,int>>arr(n+1);
    
    for(int i = 1; i <= n; i++){
        int x, y;
        cin>>x;
        
        y = i+x;
        arr[i] = {x, y};
    }
    
    int count = n, ind = 1;
    bool flag = false;
    
    while(count--){
        
        if(ind <= n && ind >= 1){
            int cell = arr[ind].second;
            ind = cell;
            
            if(cell == t){
                flag = true;
                break;
            }
        }
    }
    
	if(flag)
	    cout<<"YES";
	else
	    cout<<"NO";
	
	
    return 0;
}

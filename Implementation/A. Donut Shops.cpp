https://codeforces.com/problemset/problem/1373/A

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
        int a, b, c;
        cin>>a>>b>>c;
        
        int x = -1, y = -1;
        
        if(a < c)
            x = 1;
            
        if(a*b > c)
            y = b;
            
        cout<<x<<" "<<y;
        
        cout<<endl;
    }
	
    return 0;
}

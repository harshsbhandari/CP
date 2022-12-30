https://codeforces.com/problemset/problem/1368/A

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
        int a,b,n,count=0;
        cin>>a>>b>>n;
 
        int x=min(a,b);
        int y=max(a,b);
 
        while(true){
            x+=y;
            count++;
 
            if(x > n)
                break;
            
            y+=x;
            count++;
 
            if(y > n)
                break;
        }
 
        cout<<count;
 
        cout<<endl;
    }
	
    return 0;
}

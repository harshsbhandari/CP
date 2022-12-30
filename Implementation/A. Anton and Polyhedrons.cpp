https://codeforces.com/problemset/problem/785/A

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
    
    map<string, int>mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    
    int t;
    cin>>t;
    int count = 0;
    
    while(t--){
        string s;
        cin>>s;
        
        count += mp[s];
    }
	
	cout<<count;
	
    return 0;
}

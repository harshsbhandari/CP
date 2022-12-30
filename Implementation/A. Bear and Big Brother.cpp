https://codeforces.com/problemset/problem/791/A

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
    
    int a, b;
    cin>>a>>b;
    
    int count = 0;
    
    while(a <= b){
        a *= 3;
        b *= 2;
        count++;
    }
	
	cout<<count;
    return 0;
}

https://codeforces.com/problemset/problem/268/B

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
    
    int sum = 0;
    
    for(int i = 1; i <= n; i++)
        sum += (n-i)*i;
        
    cout<<sum+n;
	
    return 0;
}

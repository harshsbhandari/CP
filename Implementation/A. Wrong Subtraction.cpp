https://codeforces.com/problemset/problem/977/A

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
    
    int n, k;
    cin>>n>>k;
    
    while(k--){
        int rem = n%10;
        
        if(rem == 0)
            n /= 10;
        else
            n--;
    }
    
    cout<<n;
    
    return 0;
}

https://codeforces.com/problemset/problem/151/A

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
    
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int oneDrink = nl;
    int oneSalt = np;
    int bottleCapacity = k*l;
    
    int drink = bottleCapacity/oneDrink;
    int salt = p/oneSalt;
    int lime = c*d/1;
    
    cout<<(min(drink, min(salt, lime)))/n;
    
    return 0;
}

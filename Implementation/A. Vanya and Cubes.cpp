https://codeforces.com/problemset/problem/492/A

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
    
    vector<int>v;
    int sum = 0, ans, tiles = 0;
    
    for(int i = 1; i <= 1e3; i++){
        sum += i;
        tiles += sum;
        
        if(tiles > n){
            ans = i;
            break;
        }
    }
    
    cout<<ans-1;
    
    return 0;
}

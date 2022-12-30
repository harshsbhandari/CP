https://codeforces.com/problemset/problem/1095/A

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

    string s, x, ans;
    cin>>s;
    x.push_back(' ');
    
    for(int i = 0; i < n; i++)
        x.push_back(s[i]);
     
    int i = 0, j = 1;
    
    while(i < n){
        i += j;
        ans.push_back(x[i]);
        j++;
    }
    
    cout<<ans;
    
    return 0;
}

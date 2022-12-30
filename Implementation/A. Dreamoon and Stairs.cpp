https://codeforces.com/problemset/problem/476/A

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
    
    int n, m;
    cin>>n>>m;
    
    if(m > n){
        cout<<"-1";
        return 0;
    }
    
    int minCount = n/2, rem =n%2;
        
    if(rem != 0)
        minCount++;
    
    bool flag = false;
            
    for(int i = minCount; i <= n; i++){
        if(i%m == 0){
            flag = true;
            cout<<i;
            break;
        }
    }
    
    return 0;
}

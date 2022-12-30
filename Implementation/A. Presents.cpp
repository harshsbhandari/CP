https://codeforces.com/problemset/problem/136/A

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
    
    vector<int>arr(n+1), v(n+1);
    for(int i = 1; i <= n; i++)
        cin>>arr[i];
    
    for(int i = 1; i <= n; i++){
        int no = i, ans;
        
        for(int j = 1; j <= n; j++){
            if(arr[j] == no)
                ans = j;
        }
        
        v[i] = ans;
    }
    
    for(int i = 1; i <= n; i++)
        cout<<v[i]<<" ";
    
    return 0;
}

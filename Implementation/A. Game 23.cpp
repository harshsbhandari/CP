https://codeforces.com/problemset/problem/1141/A

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
    
    
    if(m%n != 0)
        cout<<"-1";
    else{
        int q = m/n;
        int count = 0;
 
        while(q%3 == 0){
            count++;
            q /= 3;
        }
        while(q%2 == 0){
            count++;
            q /= 2;
        }
        
        if(q == 1)
            cout<<count;
        else  
            cout<<"-1";
    }
	
    return 0;
}

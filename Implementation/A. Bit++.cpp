https://codeforces.com/problemset/problem/282/A

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
    
    int x = 0;
    
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        
        if(s[0] == '-' || s[2] == '-')
            x--;
        else if(s[0] == '+' || s[2] == '+')
            x++;
    }
	
	cout<<x;
	
    return 0;
}

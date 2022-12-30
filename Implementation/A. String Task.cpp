https://codeforces.com/problemset/problem/118/A

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
    
    string s, x;
    cin>>s;
    
    int n = s.length();
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
        }
        else{
            x.push_back('.');
            x.push_back(s[i]);
        }
    }
	
	cout<<x;
	
    return 0;
}

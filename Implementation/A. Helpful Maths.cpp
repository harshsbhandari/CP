https://codeforces.com/problemset/problem/339/A

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
    
    string s;
    cin>>s;
    
    vector<char>v, x;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            v.push_back(s[i]);
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        cout<<v[i];
        
        if(i < v.size()-1)
            cout<<"+";
    }
    
    return 0;
}

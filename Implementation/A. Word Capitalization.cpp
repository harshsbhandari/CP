https://codeforces.com/problemset/problem/281/A

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
    
    map<char, char>mp;
    char j = 'A';
    
    for(char i = 'a'; i <= 'z'; i++){
        mp[i] = j;
        j++;
    }
    
    if(mp.find(s[0]) == mp.end())
        cout<<s;
    else{
        s[0] = mp[s[0]];
        cout<<s;
    }
    
    return 0;
}

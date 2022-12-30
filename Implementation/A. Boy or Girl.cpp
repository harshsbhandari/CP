https://codeforces.com/problemset/problem/236/A

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
    
    map<char,int>mp;
    for(int i = 0; i < s.length(); i++)
        mp[s[i]]++;
    
    int count = mp.size();
	
	if(count%2 == 0)
	    cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
        
    return 0;
}

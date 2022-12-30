https://codeforces.com/problemset/problem/219/A

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
    
    int k;
    cin>>k;
    
    string s, ans;
    cin>>s;
    
    int n = s.length();
    map<char,int>mp;
    
    for(int i = 0; i < n; i++)
        mp[s[i]]++;
    
    int count = 0;
    
    for(auto i : mp){
        int q = 0;
        if(i.second%k == 0){
            count++;
            q = i.second/k;
        }
        
        for(int j = 0; j < q; j++)
            ans.push_back(i.first);
    }
    
    if(count != mp.size())
        cout<<"-1\n";
    else{
        for(int i = 0; i < k; i++)
            cout<<ans;
    }
	
    return 0;
}

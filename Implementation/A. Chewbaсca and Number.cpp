https://codeforces.com/contest/514/problem/A

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
    
    vector<int>v;
    int temp = n;
    
    while(temp != 0){
        int rem = temp%10;
        v.push_back(rem);
        temp /= 10;
    }
    reverse(v.begin(), v.end());
    
    vector<int>a;
    
    if(v[0] == 9)
        a.push_back(9);
    else
        a.push_back(min(v[0], 9-v[0]));
        
    for(int i = 1; i < v.size(); i++)
        a.push_back(min(v[i], 9-v[i]));
    
    for(auto i : a)
        cout<<i;
    
    return 0;
}

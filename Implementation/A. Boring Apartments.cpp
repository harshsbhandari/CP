https://codeforces.com/problemset/problem/1433/A

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
    
    vector<pair<int,int>>v;
    
    for(int i = 1; i <= 9; i++){
        int a = i;
        int b = i*(11);
        int c = i*(111);
        int d = i*(1111);
        v.push_back({a, 1});
        v.push_back({b, 2});
        v.push_back({c, 3});
        v.push_back({d, 4});
    }
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int count = 0;
        
        for(int i = 0; i < v.size(); i++){
            count += v[i].second; 
            if(v[i].first == n)
                break;
        }
        
        cout<<count;
        
        cout<<endl;
    }
	
    return 0;
}

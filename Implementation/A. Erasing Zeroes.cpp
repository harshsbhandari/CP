https://codeforces.com/problemset/problem/1303/A

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
        string s;
        cin>>s;
        
        int n = s.length(), ind1 = -1, ind2 = -1;
        
        for(int i = 0; i < n; i++){
            int x = n-i-1;
            
            if(ind1 == -1 && s[i] == '1')
                ind1 = i;
            if(ind2 == -1 && s[x] == '1')
                ind2 = x;
        }
        int c = count(s.begin(), s.end(), '1');
        
        if(c == ind2-ind1+1)
            cout<<"0";
        else{
            int count = 0;
            
            for(int i= ind1; i <= ind2; i++){
                if(s[i] == '0')
                    count++;
            }
            cout<<count;
        }
        
        cout<<endl;
    }
	
    return 0;
}

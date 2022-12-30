https://codeforces.com/problemset/problem/1430/C

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
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);
        for(int i = 0; i < n; i++)
            arr[i] = i+1;
            
        vector<pair<int,int>>v;
        
        for(int i = 0; i < n-1; i++){
            int a = arr.back();
            arr.pop_back();
            
            int b = arr.back();
            arr.pop_back();
            
            v.push_back({a, b});
            
            int q = (a+b)/2, rem = (a+b)%2;
            if(rem != 0)
                q++;
                
            arr.push_back(q);
        }
        
        
        cout<<arr[0]<<endl;
        
        for(auto i : v)
            cout<<i.first<<" "<<i.second<<endl;
        
        
        cout<<endl;
    }
	
    return 0;
}

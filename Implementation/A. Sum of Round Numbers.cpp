https://codeforces.com/problemset/problem/1352/A

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
        
        int temp = n;
        vector<int>v, ans;
        
        while(temp != 0){
            int rem = temp%10;
            
            v.push_back(rem);
            temp /= 10;
        }
        
        int count = 0;
        
        for(int i = 0; i < v.size(); i++){
            if(v[i] != 0){
                count++;
                ans.push_back(v[i]*pow(10, i));
            }
        }
        
        cout<<count<<endl;
        
        for(auto i : ans)
            cout<<i<<" "; 
        
        cout<<endl;
    }
    
    return 0;
}

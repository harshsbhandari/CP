https://codeforces.com/problemset/problem/1300/B

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
        n *= 2;
        
        vector<int>arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        sort(arr.begin(), arr.end());
    
        int newN = n-2;
        
        int ind1 = newN/2;
        int ind2 = (newN)/2 + 1;
        
        cout<<arr[ind2]-arr[ind1];
        
        cout<<endl;
    }
	
    return 0;
}

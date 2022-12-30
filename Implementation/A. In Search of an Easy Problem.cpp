https://codeforces.com/problemset/problem/1030/A

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
    
    vector<int>arr(n);
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    
    bool flag = false;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            flag = true;
            break;
        }
    }
    
    if(flag)
        cout<<"HARD";
    else
        cout<<"EASY";
	
    return 0;
}


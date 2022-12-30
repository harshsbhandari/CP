https://codeforces.com/problemset/problem/1097/A

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
    
    int n = 5;
    vector<string>arr(n);
    
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    
    bool flag = false;
    
    for(int i = 0; i < n; i++){
        string temp = arr[i];
        
        if(s[0] == temp[0] || temp[1] == s[1]){
            flag = true;
            break;
        }
    }
    
    if(!flag)
        cout<<"NO";
    else
        cout<<"YES";
	
    return 0;
}

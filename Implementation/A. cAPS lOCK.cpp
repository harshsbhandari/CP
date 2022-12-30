https://codeforces.com/problemset/problem/131/A

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
    
    int n = s.length(), count = 0;
    bool flag = false;
    
    if(s[0] >= 'a' && s[0] <= 'z'){
        
        for(int i = 1; i < n; i++){
            if(s[i] >= 'A' && s[i] <= 'Z')
                count++;
        }
        
        if(count == n-1)
            flag = true;
    }
    count = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            count++;
    }
    
    if(count == n)
        flag = true;
    
    if(flag){
        for(int i = 0; i < n; i++){
            char x = s[i];
            
            if(x >= 'A' && x <= 'Z')
                s[i] = tolower(x);
                
            else if(x >= 'a' && x <= 'z')
                s[i] = toupper(x);
        }
    }
	
	cout<<s;
	
    return 0;
}

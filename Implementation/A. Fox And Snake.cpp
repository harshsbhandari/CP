https://codeforces.com/problemset/problem/510/A

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
    
    int n, m;
    cin>>n>>m;
    
    char arr[n][m];
    bool flag = false;
    
    for(int i = 0; i < n; i++){
        if(i%2 != 0)
            flag = !flag;
            
        for(int j = 0; j < m; j++){
            if(i%2 == 0)
                arr[i][j] = '#';
            else
                arr[i][j] = '.'; 
        }
        
        if(flag && i%2 != 0)
            arr[i][m-1] = '#';
            
        else if(!flag && i%2 != 0)
            arr[i][0] = '#';
        
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout<<arr[i][j];
        cout<<endl;
    }
	
    return 0;
}

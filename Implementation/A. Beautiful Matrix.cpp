https://codeforces.com/problemset/problem/263/A

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
    
    int n = 5;
    int arr[n][n], x, y;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
            
            if(arr[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    
    cout<<abs(x-2)+abs(y-2);
	
    return 0;
}

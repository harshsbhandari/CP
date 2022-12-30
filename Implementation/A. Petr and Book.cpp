https://codeforces.com/contest/139/problem/A

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
    
    int x = 7;
    vector<int>arr(x);
    
    for(int i= 0; i < x; i++)
        cin>>arr[i];
        
    int i = 0, count = 0, sum = 0;
    
    while(sum < n){
        if(i == x)
            i = 0;
        sum += arr[i];
        count++;
        i++;
    }
    
    int rem = count%7;
    
    if(rem == 0)
        rem = 7;

    cout<<rem;
        
    return 0;
}

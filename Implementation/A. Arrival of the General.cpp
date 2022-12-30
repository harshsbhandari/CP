https://codeforces.com/problemset/problem/144/A

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
    
    int maxEle = *max_element(arr.begin(), arr.end());
    int minEle = *min_element(arr.begin(), arr.end());
    
    int maxInd, minInd;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == maxEle){
            maxInd = i;
            break;
        }
    }
    
    for(int i = n-1; i >= 0; i--){
        if(arr[i] == minEle){
            minInd = i;
            break;
        }
    }
    
    int count = 0;
    
    if(maxInd < minInd)
        count = maxInd+(n-minInd-1);
    else
        count = maxInd+(n-minInd-1)-1;
        
    cout<<count;
	
    return 0;
}

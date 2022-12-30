https://codeforces.com/problemset/problem/110/A

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
	
	int temp = n, count = 0;
	while(temp != 0){
	    if(temp%10 == 7 || temp%10 == 4)
	        count++;
	    temp /= 10;
	}
	
	if(count == 4 || count == 7)
	    cout<<"YES";
	else
	    cout<<"NO";
	
    return 0;
}

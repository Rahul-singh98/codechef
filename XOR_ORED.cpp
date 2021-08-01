#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	// your code goes her
	int t, n; cin>> t;
	while (t--){
	    cin >> n;
	    ll arr[n], m = INT_MIN ,sum ;
	    for (ll i=0; i<n;i++) {
	        cin >> arr[i ];
	        if (arr[i ] > m)
	             m = arr[i];
	    }
	    sum = arr[0]^m;
	    for (ll i=1; i <n;i++){
	       sum = sum | (arr[i ] ^ m);
	    }
	    cout << m << " "<<sum << endl; 
	} 
	return 0;
}

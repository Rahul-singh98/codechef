#include <bits/stdc++.h>
#define li long int
using namespace std;

int main() {
	// your code goes here
	int t;cin >> t;
	while(t--){
	    li x , y ,count =0;cin>>x>>y;
	    if (__gcd(x , y)>1)
	        cout << 0 << endl;
	    else if ((__gcd(x+1 ,y)>1) || (__gcd(x,y+1)>1)) {
	        cout << 1 << endl;
	    }
	    else {
	        cout << 2 << endl;
	    }
	}
	return 0;
}

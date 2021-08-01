#include <bits/stdc++.h>
#define li long int
using namespace std;

int main() {
	// your code goes here
	li a , b, c,x , count =0;
	map <li ,li> voters;
	cin >> a >> b >> c;
	for(li i=0;i<a+b+c;i++){
	    cin >>x;
	    voters[x]++;
	}
	for(auto i:voters){
        if(i.second > 1)
            count++;
    }

    cout << count << endl;
    for(auto i:voters){
        if(i.second >1)
            cout << i.first << endl;
    }

	return 0;
}

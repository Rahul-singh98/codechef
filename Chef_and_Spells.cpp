#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;cin >> t;
    while(t--){
        ll a , b , c,m ; cin >> a >> b >> c ;
        m = a+b;
        if (m < (b+c))
            m = b + c;

        if (m < (a+c))
            m = a + c ;
        cout << m << endl;
    }
    return 0;
}
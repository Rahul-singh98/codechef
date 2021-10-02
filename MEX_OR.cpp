#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll x , i=0;cin >> x;
        if (x==0)
            i = 1;
        else if (x <=2)
            i=2;
        else{
            ll j = 2;
            for(i=3;i<=x;i++){
                j = j | i;
                if(x<j){
                    break;
                }
                i =j;
            }
        }
        cout << i << "\n";
    }
    return 0;
}
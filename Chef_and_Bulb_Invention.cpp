#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;cin >> t;
    while(t--){
        ll n , p ,c=0, k; cin >> n>> p >>k;
        ll a , b , ans = 0;
        a = p%k;
        a--;
        b = ((n-1)/k)*k;
        b = n-1-b;
        if (a>b)
            ans += (b+1)*((n-1)/k+1) + (a-b)*((n-1)/k);
        else 
            ans += ((n-1)/k+1)*(a+1);

        for (ll i=a+1;i<=n-1 ;i+=k){
            ans++;
            if(i==p){
                cout << ans << "\n";
                break;
            }
        }
        // cout << ans << "\n";
    }
    return 0;
}
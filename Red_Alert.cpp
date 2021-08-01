#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n , d, k ,x, alert=0; cin >> n >> d >> k;
        ll arr[n];
        for (ll i =0;i<n;i++)cin >> arr[i];

        for (ll i=0;i<n;i++){
            if (arr[i]==0){
                if (d > alert)
                    alert =0;
                else 
                    alert -=d;
            }
                
            else {
                alert +=arr[i];
                if (alert >k)
                    break;
            }
        }
        // cout << alert << endl;

        if (alert >k)
            cout<<  "YES" << endl;

        else 
            cout << "NO" << endl;
    }
    return 0;
}
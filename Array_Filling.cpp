#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while(t--){
        ll n , m ; cin >> n >> m;
        ll arr[n+1];
        map<ll , ll , greater<ll>> mp;
        memset(arr , 0 , sizeof(arr));
        ll sum=0;
        for(ll i=0;i<m;i++){
            ll x ,y; cin >> x >> y;
            if (mp[x]>0){
                if(y>mp[x])
                    mp[x]=y;
            }
            else
                mp[x]=y;
        }

        for(ll i=1;i<=n;i++){
            for(auto k:mp){
                if (arr[i]==0){
                    if (arr[i]%k.second!=0){
                        arr[i]=k.first;
                        sum+=k.first;
                    }
                }
            }
        }

        cout << sum << '\n';
    }
    return 0;
}
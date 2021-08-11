#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<ll ,ll>& a ,pair<ll ,ll>& b){
    return a.first > b.first;
}

ll solve(ll arr[] , ll x , ll y , ll n ){
    ll sum=0;
    for(ll i=1;i<n;i++){
        if(i%y !=0){
            if(arr[i] == 0){
                arr[i]= x;
                sum += x;
            }
        }
    }

    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;
    while(t--){
        ll n , m ; cin >> n >> m;
        ll arr[n+1];
        map<ll , ll> mp;
        memset(arr , 0 , sizeof(arr));
        ll sum=0;
        for(ll i=0;i<m;i++){
            ll x ,y; cin >> x >> y;
            mp[x]=y;
        }
        sort(mp.begin() , mp.end() );

        for (auto i:mp){
            sum += solve(arr , i.first , i.second , n+1);
        }

        cout << sum << "\n";

    }
    return 0;
}
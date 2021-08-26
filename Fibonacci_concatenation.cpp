#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll MOD = 1e9 + 7;
const ll MAXN = 1e5 + 5;

ll add(ll x , ll y){
    ll res =  x+y;
    return (res >=MOD ? res - MOD : res);
}

ll mul(ll x , ll y){
    ll res =  x*y;
    return (res >=MOD ? res % MOD : res);
}

ll sub(ll x , ll y){
    ll res =  x-y;
    return (res <0  ? res + MOD : res);
}

ll inv(ll x ){
    return power(x , MOD-2);
}

ll power(ll x , ll y){
    if(y<0)
        return 1;
    ll res = 1;
    x %= MOD;
    while(y){
        if (y&1)
            res = mul(res , x);
        y >> 1;
        x=mul(x , y);
    }
}


vector<ll> ones(MAXN) , sz(MAXN);

void precompute(){
    ll i , j;
    ones[0] = 0 , ones[1] =1;
    sz[0]=0 , sz[1]=1;
    for(i=2;i<MAXN;i++){
        ones[i] = add(ones[i-1] , ones[i-2]);
        sz[i] = (sz[i-1] + sz[i-2]) % MOD-1;
    }
}

int main(){
    precompute();
    int t;cin >> t;
    while(t--){
        ll n;cin >> n;
        ll ans = mul(ones[n] , power(2 , (sz[n]-1)% (MOD-1)));

        cout << ans << "\n";
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin >> t;
    while(t--){
        ll n , m ; cin >> n >> m;
        vector<pair<int ,int>> l;

        for(int i=0;i<m;i++){
            ll x , y; cin >> x >> y;
            l.push_back({x ,y});
        }
        sort(l.begin() , l.end() , greater<pair<int , int>>());
        ll lcm=1;
        ll rem=n;
        ll res =0;

        for(int i=0;i<m && rem >0;i++){
            ll a = l[i].first , b=l[i].second;
            lcm = lcm*b/__gcd(lcm , b);
            res+=(rem-n/lcm)*a;
            rem = n/lcm;
        }

        cout << res << '\n';
    }
    return 0;
}
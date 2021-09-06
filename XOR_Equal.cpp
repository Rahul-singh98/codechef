#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool GREATER(pair<ll ,ll>& a , pair<ll ,ll>&b){
    return a.second >b.second;
}

bool SMALLER(pair<ll ,ll>& a , pair<ll ,ll>&b){
    return a.second < b.second;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n ,x; cin >> n >> x;
        vector<ll> a;
        vector<pair<ll ,ll>> vmp,vc;
        map<ll , ll> mp,c;
        for(int i=0;i<n;i++){
            ll x ; cin >> x;
            a.push_back(x);
            mp[x]++;
        }

        if (x==0){
            cout << mp.begin()->second << " 0" << endl;
        }

        else{
            for(int i=0;i<n;i++){
                mp[a[i]^x]++;
                c[a[i]^x]++;
            }
            for(auto& i:mp)
                vmp.push_back(i);
            for (auto& i:c)
                vc.push_back(i);

            sort(vmp.begin() ,vmp.end() , GREATER);
            sort(vc.begin() ,vc.end() , SMALLER);

            auto it = find(vc.begin() , vc.end() , vmp.begin()->first);

            if (it != vc.end())
                cout << vmp.begin()->second << " " << it->second << endl;
            else 
                cout << vmp.begin()->second << " 0" << endl;
        }
        // for(auto i:mp)
        //     cout << i.first << " " << i.second << endl;
        // cout << "Counter" << endl;
        // for (auto i:c)
        //     cout << i.first << " " << i.second << endl;
    }
    return 0;
}

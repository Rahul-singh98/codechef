#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool GREATER(pair<ll ,ll>& a , pair<ll ,ll>&b){
    return a.second >b.second;
}

bool SMALLER(pair<ll ,ll>& a , pair<ll ,ll>&b){
    return a.second < b.second;
}

struct FindPair {
    FindPair (int first, int second)
    : m_first_value(first)
    , m_second_value(second) { }

    int m_first_value;
    int m_second_value;
    bool operator()
        ( const pair<int, int> &p ) {
            return ( p.second == m_second_value);
    }
};

int main(){
    int t; cin >> t;
    while(t--){
        ll n ,x; cin >> n >> x;
        vector<ll> a;
        vector<pair<ll ,ll>> vmp,vc;
        map<ll , ll> mp,c;
        for(int i=0;i<n;i++){
            ll k ; cin >> k;
            a.push_back(x);
            mp[k]++;
            if (x!=0){
                mp[k^x]++;
                c[k^x]++;}
        }

        for(auto& i:mp)
            vmp.push_back(i);
        for (auto& i:c)
            vc.push_back(i);

        sort(vmp.begin() ,vmp.end() , GREATER);
        sort(vc.begin() ,vc.end() , SMALLER);

        auto it = find_if(vc.begin() , vc.end() , FindPair(0,vmp.begin()->first));
        // cout << "Iterator :" <<  it->first << it->second <<endl;
        // cout << "VC :" << vc.end()->first << vc.end()->second << endl;
        
        if (it != vc.end())
            cout <<"Entered : " << vmp.begin()->second << " " << it->second << endl;
        else 
            cout << vmp.begin()->second << " 0" << endl;

        // for(auto i:vmp)
        //     cout << i.first << " " << i.second << endl;
        // cout << "Counter" << endl;
        // for (auto i:vc)
        //     cout << i.first << " " << i.second << endl;

        // cout << "Tring to find : " << vmp.begin()->first << " in " << it->first << " " << it->second <<endl;
    }
    return 0;
}

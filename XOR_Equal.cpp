#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n ,x  ,nMax=0, op=0; cin >> n >> x;
        vector<ll> a;
        map<ll , ll> valCounts;
        set<ll> uVals;
        bool cvt=true;
        for(int i=0;i<n;i++){
            int y; cin >>y ;
            a.push_back(y);
            uVals.insert(y);
            valCounts[y]++;
        }
        for(auto w:valCounts){
            nMax = max(nMax , w.second);
        }
        for(auto w : uVals){
            int z = w ^ x;
            if (valCounts.find(z)!=valCounts.end()){
                nMax = max(nMax , valCounts[z] + valCounts[w]);
                if(cvt){
                    op++;
                    cvt=false;
                }
                op=min(op,valCounts[w]);
            }
        }

        cout << nMax << " " << op << endl;
    }
    return 0;
}

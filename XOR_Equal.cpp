#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n ,x  ,nMax=0, op=0; cin >> n >> x;
        map<ll , ll> valCounts;
        for(int i=0;i<n;i++){
            int y; cin >>y ;
            valCounts[y]++;
            nMax = max(nMax , valCounts[y]);
        }
    
        for(auto val : valCounts){
            int cnt = val.second;
            if(x!=0)
                cnt += valCounts[val.first ^ x];
            ll req = valCounts[val.first^x];

            if(cnt > nMax){
                nMax = cnt ;
                op = req;
            }
            else if(cnt==nMax)
                op = min(op ,req);
        }

        cout << nMax << " " << op << endl;
    }
    return 0;
}

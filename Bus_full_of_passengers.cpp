#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int n , m , q ; cin >> n>> m >> q;
        map<int , int> passengers;
        vector<int> bus;
        vector<int>::iterator it;
        string ans = "Consistent";
        for(int i=0;i<q;i++){
            char c ;
            int x;
            cin >> c ;
            cin >> x;
            if (c=='+'){
                passengers[x]+=1;
                bus.push_back(x);
                if (bus.size()>m)
                    ans = "Inconsistent";
            }
            else {
                if (passengers.count(x) ==0){
                    ans = "Inconsistent";
                }
                it = find(bus.begin(), bus.end(), x);
                if (it != bus.end())
                {
                    bus.erase(it);
                }
                passengers[x]-=1;
            }
            
        }
        
        cout << ans << '\n';
    }
    return 0;
}
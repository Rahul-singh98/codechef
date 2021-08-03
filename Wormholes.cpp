#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x , y ; cin >> n >> x >> y;
    map<int ,int> t;
    for(int i=0;i<n;i++){
        int a , b;cin >> a >> b;
        t.insert(make_pair(a , b));
    }
    vector<int> V(x) , W(y);
    for(int i=0;i<x;i++)cin >> V[i];
    for(int i=0;i<y;i++)cin >> W[i];

    sort(V.begin() ,V.end() , greater<int>());
    sort(W.begin() , W.end() , greater<int>());

    for(auto itr:t){
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if((V[i]<=itr.first) && (W[j]>=itr.second)){
                    cout << W[j] - V[i] + 1 << endl;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
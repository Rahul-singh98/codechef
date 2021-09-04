#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x , y ; cin >> n >> x >> y;
    vector<pair<int ,int>> t;
    for(int i=0;i<n;i++){
        int a , b;cin >> a >> b;
        t.push_back(make_pair(a , b));
    }
    vector<int> V(x) , W(y);
    for(int i=0;i<x;i++)cin >> V[i];
    for(int i=0;i<y;i++)cin >> W[i];

    sort(V.begin() ,V.end());
    sort(W.begin() , W.end());
    sort(t.begin(),t.end());

    int prev_min = INT_MAX;

   for(int i=0;i<n;i++){
       auto start = upper_bound(V.begin() , V.end() , t[i].first);
       auto end = lower_bound(W.begin() , W.end() , t[i].second);

       if (start!=V.begin() && end!=W.end()){
           --start;
           prev_min = min(prev_min , *end - *start +1);
       }
   }
    cout << prev_min << '\n';
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define mp make_pair
#define pb push_back
#define vvi vector<vector<int>>

int main(){
    int t; cin >> t;
    while(t--){
        int x , y ; cin >> x >>y ;
        cout << min(3*x , 2 * y) << '\n';
    }
    return 0;
}

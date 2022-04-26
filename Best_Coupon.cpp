#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define mp make_pair
#define pb push_back
#define vvi vector<vector<int>>

int main(){
    int t; cin >> t;
    while(t--){
        int n;cin>>n;
        cout << max(int(n*0.10) , 100) << '\n';
    }
    return 0;
}

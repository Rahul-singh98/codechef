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
        int pos=0 , neg =0;
        for(int i=0;i<n;i++){
            int x ; cin >> x;
            if(x==1) pos++;
            else neg++;
        }

        if(abs(pos - neg)<2) cout << "YES\n";
        else if(abs(pos-neg)==2){
            if(neg%2) cout << "NO\n";
            else cout << "YES\n";
        }
        else cout << "NO\n";

    }
    return 0;
}

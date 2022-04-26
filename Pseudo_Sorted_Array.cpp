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
        vector<int> vals(n);
        for(int i=0;i<n;i++) cin >> vals[i];

        int counter = 0;
        for(int i=1;i<n;i++){
            if(vals[i] < vals[i-1]) swap(vals[i] , vals[i-1]) , counter++;}

        for(int i=1;i<n;i++){
            if(vals[i] < vals[i-1]) swap(vals[i] , vals[i-1]) , counter++;}
            
        if(counter> 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}

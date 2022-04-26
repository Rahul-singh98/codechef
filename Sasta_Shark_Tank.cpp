#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define mp make_pair
#define pb push_back
#define vvi vector<vector<int>>

int main(){
    int t; cin >> t;
    while(t--){
        int a , b; cin >> a >> b; 

        int costA = int(a/ 0.1),costB = int( b/ 0.2);
        if(costA==costB) cout << "ANY\n";
        else if(costA > costB) cout << "FIRST\n";
        else cout << "SECOND\n";

    }
    return 0;
}

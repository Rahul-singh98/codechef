#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;cin >>t;
    while(t--){
        ll n , count=0 , max_subarray=1; cin >> n;
        if (n<3)
            max_subarray = 1;
        else{
            for(int i=2;i<=40;i++){
                ll j = (ll)1 << i;
                if(n<j){
                    ll first = ( 1 << (i-1));
                    ll second = ( 1 << (i-2));
                    count = (n-first)+1;
                    max_subarray = max(first-second ,count );
                    break;
                }
                else if(n==j){
                    ll first = ( 1 << (i-1));
                    max_subarray = (n-first);
                    break;
                }
            }
        }

        cout << max_subarray << "\n";
    }
    return 0;
}
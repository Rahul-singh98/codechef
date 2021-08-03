#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);

    ll n , k, count =0ll;cin >> n>> k;
    ll arr[n];
    for(ll i=0ll;i<n;i++)cin>>arr[i];

    sort(arr , arr+n);

    for(ll i =0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                if(arr[i]-arr[j]>=k){
                    count++;
                    ll rem = (n- (j+1));
                    count+= rem;
                    break;
                }
            }
            else {
                if(arr[j]-arr[i]>=k){
                count++;
                ll rem = (n- (j+1));
                count+= rem;
                break;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll zerOne(ll number , int d){
    string s="";
    ll curMax = 0;
    while(number){
            int temp = number%10;
            number/=10;
            
            if(temp == d){
                s.push_back('1');
                reverse(s.begin() , s.end());
                curMax = max(curMax , (ll)stoi(s));
                reverse(s.begin() , s.end());
                s.pop_back();
                s.push_back('0');
            }
            else 
                s.push_back('0');
        }
    return curMax;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n , k ; cin >> n >> k;
        ll out = zerOne(n , k) , temp = n ,temp1=n;
        ll ans = 0;
        while(out){
            temp = (temp + out) - (temp % out);
            out = zerOne(temp , k);
        }
        ans = temp-n;
        cout << ans << "\n";
    }
    return 0;
}
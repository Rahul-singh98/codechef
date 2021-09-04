#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n , a , b ;cin >> n >> a >> b;
        string s ; cin >> s;
        int i_d = count(s.begin() , s.end() , '0');
        int i_s = n - i_d;
        cout << i_d * a + i_s * b << endl;
    }
    return 0;
}

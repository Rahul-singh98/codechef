#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<pair<int , int>> pt(n);
        map<tuple<int , int ,int> , int> m[4];
        for(int i=0;i<n;i++) cin >> pt[i].first;
        for(int i=0;i<n;i++) cin >> pt[i].second;
        
        for(int i=0;i<n;i++){
            auto xi = pt[i].first , yi = pt[i].second ;
            m[0][{1,0,-xi}]++; // stores vertical line
            m[1][{0,1,-yi}]++; // stores horizontal lines
            m[2][{1,-1,-xi + yi}]++; // stores diagonal / lines
            m[3][{1,1,-xi-yi}]++; // stores diagonal \ line
        }

        auto intersect = [&](auto line1 , auto line2){
            auto [a1 , b1 , c1]=line1;
            auto [a2 , b2 , c2]=line2;

            int den = a1 * b2 - b1 * a2,x=2e18 ,y=0;
            if(den!=0){
                x = b1*c2 - c1 * b2;
                y = a1*c2 - c1 * a2;
            } 

            if (den < 0){
                den = -den;
                x = -x;
                y=-y;
            }
            return make_tuple(x , y , den);
        };

        auto moves = [&](tuple<ll,ll ,ll> point){
            auto [x , y, den] = point;
            int cur= 2*n;
            if (x==2e18)
                return cur;
            for(int i=0;i<n;i++){
                auto [xi,yi]= pt[i];
                int ax =xi * den , ay= yi * den ;
                if (ax==x && ay==y)
                    cur -=2;
                else if(ax==x || ay==y|| (ax-ay)== ( x-y)|| (ax+ay)== ( x+y))
                    cur--;
            }
            return cur;
        };

        int ans = 2*n;
        for(int i=0;i<n;i++){
            auto [xi , yi]=pt[i];
            ans = min(ans , moves({x , y, 1}));
        }

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                for(auto [line1 , cnt1]:m[i]){
                    for (auto [line2 , cnt2]:m[j]){
                        auto point = intersect(line1 , line2);
                        ans = min(ans , moves(point));
                    }
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
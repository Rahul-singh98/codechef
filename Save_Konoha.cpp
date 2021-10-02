#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n , pain , cnt=0;cin >> n>> pain;
        vector<int> s(n);
        for(int i=0;i<n;i++) cin>> s[i];

        auto it = upper_bound(s.begin() , s.end() , pain);
        cout << "Upper Bound is : " << (*it) << "\n";

        it = lower_bound(s.begin() , s.end() , pain);
        cout << "Lower Bound is : " << (*it) << "\n";
        // while(s.size()>0){
        //     cnt+=1;
        //     sort(s.begin() , s.end());
        //     int s_Size = s.size();
        //     pain -= s[s_Size-1];
        //     s[s_Size-1] /= 2;
        //     if(s[s_Size-1]== 0)
        //         s.pop_back();
        //     if(pain <=0)
        //         break;
        // }
        // if(pain<=0)
        //     cout << cnt << "\n";
        // else 
        //     cout << "Evacuate\n"; 
    }
    return 0;
}
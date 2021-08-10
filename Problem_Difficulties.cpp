#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        map<int , int > mp ;
        vector<int> v;
        int x ; 
        for (int i=0;i<4;i++){
            cin >>x;
            mp[x]++;
        }      
        for (auto i:mp)
            v.push_back(i.second);
        
        sort(v.begin() , v.end() , greater<int>());

        if (v[0] > 3)
            cout << "0\n";
        else if (v[0] >=2)
            cout << "1\n";
        else 
            cout << "2\n";
    }
    return  0;
}
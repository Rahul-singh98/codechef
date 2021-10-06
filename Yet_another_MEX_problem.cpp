#include<bits/stdc++.h>
using namespace std;

int mex(vector<int> arr , int n ,int start , int end){
    sort(arr.begin() , arr.end());
    int curMex = 0;
    for(int i=start;i<=end;i++){
        if(curMex == arr[i])
            curMex++;
    }
    return curMex;
}

int main(){
    int t; cin >>t;
    while(t--){ 
        int n , k ; cin >> n >> k;
        vector<int> a(n) ,b;
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                b.push_back(mex(a , n , i , j));
            }
        }
        sort(b.begin() , b.end());
        // for(int i=0;i<b.size();i++)
        //     cout << b[i] << ' ';

        cout<< b[k-1] << '\n';
    }
    return 0;
}
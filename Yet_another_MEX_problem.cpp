#include<bits/stdc++.h>
using namespace std;

int mex(vector<int> arr , int n){
    sort(arr.begin() , arr.end());
    int curMex = arr[n];
    for(int i=0;i<n;i++){
        if(curMex == arr[i])
            curMex--;
    }
    if(curMex < arr[0])
        curMex = arr[n-1]+1;

    return curMex;
}

int main(){
    int t; cin >>t;
    vector<int> a(t);
    for(int i=0;i<t;i++)
        cin >> a[i];

    cout << mex(a , t);
    return 0;
}
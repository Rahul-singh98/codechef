#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n , sum=0 ,i=0,j=0,k=0 ; cin >> n;
        vector<int> b , even , odd;
        for(int l=0;l<n;l++){
            int x;cin >> x;
            if (x%2==0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        while(i!=even.size() && j!= odd.size()){
            // Adding even numbers
            i++;k++;sum++;
            // Adding odd numbers
            j++;k++;sum++;
        }
        // Add remaining even numbers
        while(i!=even.size()){
            if (k%2==0)
                sum++;
            k++;i++;
        }

        // Add remaining odd numbers
        while(j!=odd.size()){
            if (k%2!=0)
                sum++;
            k++;j++;
        }
        cout << sum << endl;
    }
    return 0;
}

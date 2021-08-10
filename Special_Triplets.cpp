#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while (t--){
        time_t start = time(NULL);
        int n , count=0;cin >> n;
        for (int c=1 ; c<=n;c++){
            for (int b=c ;b<=n ; b+=c){
                if (b%c==0){
                    for(int a =c;a<=n;a+=b){
                        if (a%b==c)
                            count++;
                    }
                }
            }
        }
        time_t end = time(NULL);
        cout << "Start time is : "<< start << " End time is : "<< end << " diff : "<< end-start << "\n";
        cout << count << '\n';
    }
}
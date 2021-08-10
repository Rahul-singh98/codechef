#include<bits/stdc++.h>
using namespace std;

int prime[10] = {2,3 ,5, 7,11 , 13 , 17, 19, 23 , 31};

void recur(int t){
    if (t==1)
        return;
    int mynum = 0;
    for(int i=0 ; i<10;i++){
        if (t%prime[i]==0){
            mynum = t/prime[i];
            cout << prime[i] << " ";
            break;
        }
    }
    recur(mynum);
}

int main(){
    int t=40;
    recur(t);
    return 0;
}
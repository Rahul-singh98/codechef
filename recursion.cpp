#include<bits/stdc++.h>
using namespace  std;

void recur(int x){
    if (x<=0)
        return ;
    cout << x << " hello world" << endl;

    recur(x/2);
    return;
}

int main(){
    recur(10);
    return 0;
}
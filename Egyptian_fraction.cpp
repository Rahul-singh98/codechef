#include<bits/stdc++.h>
using namespace std;

void printEgiption(int num , int den){
    if (num == 0 || den ==0)
        return;

    if(num%den ==0){
        cout << num/den ;
        return;
    }

    if (den %num ==0){
        cout << "1/" << den /num;
        return;
    }

    if (num > den){
        cout << num/den << " + ";
        printEgiption(num%den ,den );
        return;
    }

    int n = den/num + 1;
    cout << "1/" << n << " + ";
    printEgiption(num * n - den , den*n);
}

int main(){
    int num = 6 , den = 14;
    printEgiption(num  , den);
    return 0;
}
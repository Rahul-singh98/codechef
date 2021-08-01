#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
  
// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<int, int>& M)
{
  
    // Declare vector of pairs
    vector<pair<int, int> > A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
    
    cout << A.begin()->second << endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,x,count=0,t=0;cin>>n;
        map<int,int > match;
        for(int i=0;i<n;i++){
            cin >> x;
            if (match.find(x)!=match.end())
                t;
            else {
                cout << x <<" ";
                count++;}
            match[x]++;
        }
        // sort(match);
        cout << "\n"  << count << endl;
    }
    return 0;
}
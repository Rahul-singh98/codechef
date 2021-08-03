

// C++ implementation of the
// above approach
#include <bits/stdc++.h>
using namespace std;
 
void optimum_sequence_jobs(vector<int>& V, double P)
{
    int j = 1, N = V.size() - 1;
    double result = 0;
 
    // Create a min-heap (priority queue)
    priority_queue<int, vector<int>, greater<int> > Queue;
 
    // Add all goods to the Queue
    for (int i = 1; i <= N; i++)
        Queue.push(V[i]);   
 
    // Pop Goods from Queue as long as it is not empty
    while (!Queue.empty()) {
 
        // Print the good
        cout << Queue.top() << " ";
 
        // Add the Queue to the vector
        // so that total voulme can be calculated
        V[j++] = Queue.top();
        Queue.pop();
    }
 
    // Calclulating volume of goods left when all
    // are produced. Move from right to left of
    // sequence multiplying each volume by
    // increasing powers of 1 - P starting from 0
    for (int i = N; i >= 1; i--)
        result += pow((1 - P), N - i) * V[i];   
 
    // Print result
    cout << endl << result << endl;
}
 
// Driver code
int main()
{
    // For implementation simplicity days are numbered
    // from 1 to N. Hence 1 based indexing is used
    vector<int> V{ 3, 1, 41, 52, 15, 4, 1, 63, 12 };
 
    int N= V.size();
    // 10% loss per day
    double P = 0.10 ;
    double result=0;
    sort(V.begin() , V.end());

    for(auto i=V.begin() ; i!=V.end() ;i++)
        cout << *i << " ";
        
    for (int i = N-1; i >= 0; i--)
        result += pow((1 - P), N - (i+1)) * V[i];   
    // optimum_sequence_jobs(V, P);

    cout << result << endl;
 
    return 0;
}   
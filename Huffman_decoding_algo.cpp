#include<bits/stdc++.h>
using namespace std;

map<char , string> codes;
map<char , int> freq;

struct MinHeapNode{
    char data;
    unsigned freq;

    MinHeapNode *left , *right;

    MinHeapNode(char data , int freq){
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};


struct compare{
    bool operator()(MinHeapNode* l , MinHeapNode* r){
        return (l->freq > r->freq);
    }
};

void printCodes(struct MinHeapNode* node ,string str){
    if (!node)
        return;
    if (node->data != '$')
        cout << node->data << ": " << str << "\n";

    printCodes(node->left , str+"0");
    printCodes(node->right , str + "1");
}

void calculateFreq(string str){
    for(int i=0;i<str.size() ;i++)
        freq[str[i]]++;
}


priority_queue<MinHeapNode* , vector<MinHeapNode*> ,compare> minHeap;

void storeCodes(struct MinHeapNode* node ,string str){
    if (!node)
        return;
    if (node->data != '$')
        codes[node->data]=str;

    storeCodes(node->left , str+"0");
    storeCodes(node->right , str + "1");
}

string HuffmanCodesDecode(struct MinHeapNode* root , string encodedString){
    string ans = "";
    struct MinHeapNode* curr = root;
    for(int i=0;i<encodedString.size();i++){
        if (encodedString[i]=='0')
            curr = curr->left;
        else 
            curr = curr->right;

        if (curr->left == NULL and curr->right== NULL){
            ans += curr->data;
            curr= root;
        }
    }
    return ans+'\0';
}

void HuffmanCodes( int size){
    MinHeapNode *left , *right , *top;

    for (map<char , int>::iterator v= freq.begin() ; v!= freq.end() ; v++)
        minHeap.push(new MinHeapNode(v->first , v->second));

    while (minHeap.size() != 1){
        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        top = new MinHeapNode('$' , left->freq + right->freq);
        top->left = left;
        top->right = right;

        minHeap.push(top);
    }

    printCodes(minHeap.top() , "");
    storeCodes(minHeap.top() , "");
}


int main(){
    string str = "GeekforGeeks";
    string encodedString , decodedString;
    calculateFreq(str);

    HuffmanCodes(str.length());

    for (auto i:str)
        encodedString+=codes[i];

    cout << "Encodes String is : \n" << encodedString << "\n";

    decodedString = HuffmanCodesDecode(minHeap.top() , encodedString);

    cout << "Decoded String is : \n" << decodedString << "\n";
    return 0;
}
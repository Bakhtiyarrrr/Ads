#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
     int value;
     Node* nxt;
    Node(int val) {
        value = val;
        nxt = NULL;
    }
};

struct List {
    Node* head;
    Node* tail;
    List() {
        head = NULL;
        tail = NULL;
    }
    void append(int data) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->nxt = newNode;
            tail = newNode;
        }
    }
    void mode(int n) {
        Node* current = head;
        vector<int> v(1001);
        vector<int> t;
        
        while(current != NULL) {
            v[current->value]++;
            current = current->nxt;
        }
        int max = 0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] > max) {
                max = v[i];
            }
        }
    
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == max) {
                t.push_back(i);
            }
            
        }
        sort(t.begin(),t.end());
        for(int i = t.size() - 1; i >= 0; i--) {
            cout << t[i] << " ";
        }
    }


};




int main() {
    int n;
    cin >> n;
    List listik;
    int j = 0;
    while(j < n) {
        int k;
        cin >> k;
        listik.append(k);
        j++;
    }
    
    listik.mode(n);
}
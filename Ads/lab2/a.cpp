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
    void solution(int num) {
        Node* current = head;
        vector<int> v;
        int min = 1000000;
        while(current != NULL) {
            v.push_back(abs(num - current->value));
            current = current->nxt;
        }
        for(int i = 0; i < v.size(); i++) {
            if(min > v[i]) {
                min = v[i];
            }
        }
        for(int i = 0; i < v.size(); i++) {
            if(min == v[i]) {
                cout << i;
                break;
            }
        }
    }
   
   
};






int main() {
  int n;
  cin >> n;
  List listik;
  int j = 0;
  while(j != n) {
    int p;
    cin >> p;
    listik.append(p);
    j++;
  }
  int k;
  cin >> k;
  listik.solution(k);
  
}
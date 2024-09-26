#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
     string value;
     Node* nxt;
    Node(string val) {
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
    void append(string data) {
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
    void shift(int n) {
        Node* current = head;
        Node* before_current = NULL;
        int counter = 0;
        while(counter != n) {
            counter++;
            if(counter == n) {
                before_current = current;
            }
            current = current->nxt;
        }
        tail->nxt = head;
        head = current;
        before_current->nxt = NULL;
        
    }
    void display() {
        Node* current = head;
        while(current != NULL) {
            cout << current->value << " ";
            current = current->nxt;
        }
    }
};






int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  List listik;
  int j = 0;
  while(j != n) {
    string word;
    cin >> word;
    listik.append(word);
    j++;
  }
  listik.shift(k);
  listik.display();
}
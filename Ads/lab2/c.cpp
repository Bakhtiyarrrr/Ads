#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
     Node* nxt;
     int value;
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
    void remove(int n) {
        int counter = 0;
        Node* current = head;
        Node* before_current = NULL;
        while(counter != n) {
            counter++;
            if(counter % 2 == 0) {
               before_current->nxt = current->nxt;
               delete current;
               current = before_current->nxt;
               
            }
            else {
               before_current = current;
               current = current->nxt;
            }
            
        }
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
   List listik;
   int j = 0;
   while(j < n) {
    int k;
    cin >> k;
    listik.append(k);
    j++;
   }
   listik.remove(n);
   listik.display();
}
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
   public:
     Node* head;
     Node* tail;
    List() {
        tail = NULL;
        head = NULL;
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
    void delete_dub() {
        Node* front = head->nxt;
        Node* back = head;
        Node* pointer = head;
        
       while(pointer != NULL) {
        front = pointer->nxt;
        back = pointer;

        while(front != NULL) {
            if(front->value == pointer->value && front->value != "nock") {
               back->nxt = front->nxt;
               delete front;
               front = back->nxt;
            }
            else {
               back = front;
               front = front->nxt;
            
            }
        }
        pointer = pointer->nxt;
       
       }
    }
    

    int size() {
        Node* current = head;
        int counter = 0;
        while(current != NULL) {
           counter++;
           current = current->nxt;
        }
        return counter;

    }
    Node* give_head() {
        return head;
    }

};

void display(List listik, Node* oko) {
        Node* current = oko;
        vector <string> v;
        cout << "All in all: " << listik.size() << endl << "Students:" << endl;
        while(current != NULL) {
            // cout << current->value << endl;
            v.push_back(current->value);
            current = current->nxt;
        }
        for(int i = v.size()-1; i >= 0; i--) {
            cout << v[i] << endl;
        }
        
    }


int main() {
  int n;
  cin >> n;
  List listik;
  Node* oko;
  int j = 0;
  while(j < n) {
    string k;
    cin >> k;
    listik.append(k);
    j++;
  }
  listik.delete_dub();
  oko = listik.give_head();
  display(listik,oko);
  
}
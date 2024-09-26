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
   public:
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
           
                tail->nxt = newNode; // присойдиняем новую ячейку
                tail = newNode;// tail становится последним элементом

            
        }
     } 
     void display() {
        Node* nhead = head;
        while(nhead != NULL) {
            cout << nhead->value << " ";
            nhead = nhead->nxt;
        }
     }
    int size() {
      int counter = 0;
      Node* nhead = head;
      while(nhead != NULL) {
         nhead = nhead->nxt;
         counter++;
      }
      return counter;
    }
};

int main() {
    int n;
    cin >> n;
    List mylist;
    List counter;
    int j = 0;
    while(j < n) {
       int k;
       cin >> k;
       mylist.append(k);
       j++;
    }
    mylist.display();
   cout <<endl<< mylist.size();

}
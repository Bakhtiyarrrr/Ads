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
    void insert(int data, int pos) {
        int counter = 0;
        Node* current = head;
        Node* before_current = head;
        Node* pointer;
        while(true) {
            if(counter == pos && current != head) {
                Node* newNode = new Node(data);
                pointer = before_current->nxt;
                before_current->nxt = newNode;
                current = before_current->nxt;
                current->nxt = pointer;
                break;
            }
            else if(counter == pos && current == head) {
                Node* newNode = new Node(data);
                pointer = head;
                head = newNode;
                head->nxt = pointer;
                break;
            }
            
            else {
                before_current = current;
            }
            current = current->nxt;
            counter++;
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

int main () {
    int n;
    cin >> n;
    List listik;
    int j = 0;
    while(j<n) {
        int k;
        cin >> k;
        listik.append(k);
        j++;
    }
    int f,pos;
    cin >> f >> pos;
    listik.insert(f,pos);
    listik.display();

}
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
        if(current == NULL) {
            cout << -1 << endl;
        }
        else {
           while(current != NULL) {
            cout << current->value << " ";
            current = current->nxt;
        }
        cout << endl;
        }
       
        
    }
    void movement(int pos_1, int pos_2) {
        Node* point_1;
        Node* point_2;
        Node* current = head;
        int counter = 0;
        while(current != NULL) {
            if(counter == pos_1) {
                point_1 = current;
            }
            else if(counter == pos_2) {
                point_2 = current;
            }
            current = current->nxt;
            counter++;
        }
        swap(point_1->value,point_2->value);

    }
    void delete_pos(int pos) {
        Node* current = head;
        Node* before_current = head;
        int counter = 0;
        while(current != NULL) {
            if(counter == pos && current != head) {
                before_current->nxt = current->nxt;
                delete current;
                current = before_current->nxt;
                break;
            }
            else if(counter == pos && current == head) {
                current = current->nxt;
                delete head;
                head = current;
                break;
            }
            else {
                before_current = current;
            }
            current = current->nxt;
            counter++;
        }
    }
    void reverse() {
        Node* next = NULL;
        Node* current = head;
        Node* prev = NULL;
        tail = head;
        while(current != NULL) {
            
               next = current->nxt;
               current->nxt = prev;
               prev = current;
               current = next;
            
        }
        head = prev;
    }
    // void right_shift(int x,int y) {
    //     Node* current = head;
    //     Node* before_current = NULL;
    //     int counter = 0;
    //     while(counter != x) {
    //         counter++;
    //         if(counter == y-x) {
    //             before_current = current;
    //         }
    //         current = current->nxt;
    //     }
    //     tail->nxt = head;
    //     head = before_current->nxt;
    //     before_current->nxt = NULL;
    // }
    void left_shift(int n) {
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
        tail = before_current;
        
        
    }
    // int size() {
    //     Node* current = head;
    //     int counter = 0;
    //     while(current != NULL) {
    //         current = current->nxt;
    //         counter++;
    //     }
    //     return counter;

    // }
};


int main () {
    List listik;
   while(true) {
    int n;
    cin >> n;
    if(n == 0) {
        break;
    }
    else if(n == 1) {
        int x,pos;
        cin >> x >> pos;
        listik.insert(x,pos);
    }
    else if(n == 2) {
        int pos;
        cin >> pos;
        listik.delete_pos(pos);
    }
    else if(n == 3) {
        listik.display();
    }
    else if(n == 4) {
        int pos_1,pos_2;
        cin >> pos_1 >> pos_2;
        listik.movement(pos_1,pos_2);
    }
    else if(n == 5) {
        listik.reverse();
    }
    else if(n == 6) {
        int x;
        cin >> x;
        listik.left_shift(x);
    }
    // else if(n == 7) {
    //     int x;
    //     cin >> x;
    //     listik.right_shift(x,listik.size());
    // }

   }

}
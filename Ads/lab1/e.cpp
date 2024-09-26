#include <bits/stdc++.h>
using namespace std;

int main () {
    deque <int> nursik;
    deque <int> boris;
    int a,b;
    int n,k;
    int j = 0;
    int steps = 0;
    for(int i = 0; i < 5; i++) {
       cin >> n; 
       boris.push_back(n);
    }
    for(int i = 0; i < 5; i++) {
        cin >> k;
        nursik.push_back(k);
    }
  
  
    while(nursik.size() != 0 && boris.size() != 0 && steps < 1000000) {
       a = nursik.front();
       b = boris.front(); 
       if(a == 0 && b == 9) {
          nursik.pop_front();
          boris.pop_front();
          nursik.push_back(b);
          nursik.push_back(a);

       }
       else if(a == 9 && b == 0) {
          nursik.pop_front();
          boris.pop_front();
          boris.push_back(b);
          boris.push_back(a);
       }
       else {
         if(a > b) {
          nursik.pop_front();
          boris.pop_front();
          nursik.push_back(b);
          nursik.push_back(a);
          
        }
         else if(a < b) {
          nursik.pop_front();
          boris.pop_front();
          boris.push_back(b);
          boris.push_back(a);
          
        }
       }
       
        
        steps++;
       
       
        
    }
    if(nursik.size() != 0) {
        cout << "Nursik" << " " << steps;
    }
    else if(boris.size() != 0) {
        cout << "Boris" << " " << steps;
    }
    else if(steps >= 1000000) {
        cout <<"blin nichya";
    }
}
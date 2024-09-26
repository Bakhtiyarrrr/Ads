#include <bits/stdc++.h>
using namespace std;

int main () {
    deque<int> d;
    vector <string> v;
    bool work = true;
    string dik;
    while(work) {
       char sign;
       cin >> sign;

       if(sign != '*' && sign != '!') {
         int digit;
         cin >> digit;
         if(sign == '+') {
            d.push_front(digit);
         }
         else if(sign == '-') {
            d.push_back(digit);
         }
       }
       else if(sign == '*') {
          if(d.size() > 1) {
            dik = to_string(d.front() + d.back());
            v.push_back(dik);
            d.pop_front();
            d.pop_back();
          }
          else if(d.size() == 1) {
            dik = to_string(d.front() + d.front());
            v.push_back(dik);
            d.pop_front();
          }
          else if(d.empty()) {
            v.push_back("error");
            continue;
          }
          
          
       }
       else if(sign == '!') {
        break;
       }
    }
    
    
    for(auto x : v) {
        cout << x << endl;
    }
    
}
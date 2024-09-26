#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    deque<int> t;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool truth;
    int k = 0;
    int a;
    int d = 0;
    int j = 0;
    while(j != n || truth) {
      
      if(truth && t.empty() != true){
        for(auto x : t) {
            cout << x << " ";
        }
        cout << endl;

        t.clear();
        j++;
        t.push_back(v[j]);
        d = 0;
        truth = false;
      } 
       else if (t.empty()) {
          t.push_back(v[j]);
       }

       a = v[j]-d;
       if(d != 0) {
       t.push_front(v[j]-d);
       }
       d++;
       while(k < a) {
         t.push_front(t.back());
         t.pop_back();
         k++;
       }
      
       k = 0;
      
       if(t.size() == v[j]) {
          truth = true;
          
        }
      }
}
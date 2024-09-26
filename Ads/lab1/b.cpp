#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << -1 << " ";
    for(int i = 1; i < n; i++) {
       for(int j = i-1; j >= 0; j--) {
          if(v[i] >= v[j]) {
            cout << v[j] << " ";
            break;
          }
          if(j == 0) {
            cout << -1 << " ";
          }
       }
    }
}
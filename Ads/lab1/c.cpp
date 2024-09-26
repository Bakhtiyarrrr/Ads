#include <bits/stdc++.h>
using namespace std;
string rem(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '#') {
           s.erase(i-1,2);
           i = i - 2;
        }
    }
    return s;
} 
int main () {
    string s,t;
    cin >> s >> t;
    if(rem(s) == rem(t)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    
}
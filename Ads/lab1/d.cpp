#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    int j,i = 0;
   while(s.size() != 0) {
      if(s[i] == s[i+1]) {
        s.erase(i,2);
        i = 0;
      }
      else {
        i++;
      }
      
      if(i == s.size() - 1) {
        break;
   }
      
      

   }
   
   if(s.size() != 0) {
    cout << "NO";
   }
   else {
    cout << "YES";
   }
}
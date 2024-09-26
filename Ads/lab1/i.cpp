#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<pair<char,bool>> general(n);
    for(int i = 0; i < n; i++) {
      cin >> general[i].first;
      general[i].second = true;
    }
    int j = 0;
    int a = 0;
    int counter = 0;
  
    for(int i = 0; i < general.size(); i++) {
        if(general[i].first == 'K' && general[i].second) {
          if(i == general.size() - 1) {
             for(int k = 0; k < i; k++) {
                  if(general[k].first == 'S' && general[k].second) {
                    general[k].second = false;
                    i = -1;
                    break;
           }}}
          else {
                for(int j = i + 1; j < general.size(); j++) {
                  if(general[j].first == 'S' && general[j].second) {
                    general[j].second = false;
                    a = j;
                    break;
              }
                  else if(j == general.size()-1 && counter == 0){
                    j = 0;
                    counter++;
                  }
                }
                if(a == general.size()) {
                        i = -1;
                        a = 0;
                    }
                }}

        else if(general[i].first == 'S' && general[i].second) {
            if(i == general.size() - 1) {
               for(int k = 0; k < i; k++) {
                  if(general[k].first == 'K'&& general[k].second) {
                    general[k].second = false;
                    i = -1;
                    break;
                }
                }
                }
            else {
                for(int j = i + 1; j < general.size(); j++) {
                  if(general[j].first == 'K' && general[j].second) {
                    general[j].second = false;
                    a = j;
                    break;
                }
                  else if(j == general.size()-1 && counter == 0){
                    j = 0;
                    counter++;
                  }
                }
                if(a == general.size()) {
                        i = -1;
                        a = 0;
                    }
                }
    }
    //  for(int i = 0; i < general.size(); i++) {
    //   cout << general[i].first << " ";
    // }
    }
    // for(int i = 0; i < general.size(); i++) {
    //   cout << general[i].first << " ";
    // }

    for(int i = 0; i < general.size(); i++) {
      if(general[i].first == 'K' && general[i].second == true) {
         cout << "KATSURAGI";
         break;
      }
      else if(general[i].first == 'S' && general[i].second == true) {
        cout << "SAKAYANAGI";
        break;
      }
    }
    
  
}
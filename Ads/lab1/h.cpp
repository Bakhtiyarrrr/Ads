#include <bits/stdc++.h>
using namespace std;
bool prime (int n) {
    bool truth = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            truth = false;
            break;
        }
    }
    if(n == 1 || n == 0) {
        truth = false;
    }
    return truth;
}

int main()
{
    int n;
    cin >> n;
    
    if(prime(n) == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
   
    return 0;
}
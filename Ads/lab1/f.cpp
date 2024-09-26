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
    return truth;
}

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    
    for(int i = 2; i <= 7919; i++) {
        if(prime(i) == true) {
            counter++;
        }
        if(counter == n) {
            cout << i;
            break;
        }
    }

    return 0;
}
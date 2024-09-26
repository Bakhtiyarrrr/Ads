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
    int counter = 0;
    int ind = 0;
    
    for(int i = 2; i <= 10000; i++) {
        if(prime(i) == true) {
           counter++;
        }
        
        if(prime(counter) == true && prime(i) == true) {
            ind++;
        }
        
        if(ind == n) {
             cout << i;
             break;
        }
        
        }
    

    return 0;
}
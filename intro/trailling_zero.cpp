#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int trail = 0;
   
    while(n >= 5) {
        trail += (n/5);
        n /= 5;
    }
    
    cout << trail << endl;
    
    return 0;
}
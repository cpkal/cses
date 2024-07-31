#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; cin >> n;
    int x = 0;
    int rep = 0;
    int max_rep = 0;
    for(int i = 0; i <= n.length(); i++) {
        if(rep > max_rep) {
                max_rep = rep;
            }
        if(n[x] == n[i]) {
            rep++;
        } else {
            
            x = i;
            rep = 1;
        }
    }
    
    cout << max_rep << endl;

    return 0;
}
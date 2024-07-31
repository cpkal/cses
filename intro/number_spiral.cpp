#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--) {
        int y, x; cin >> y >> x;
        if(y > x) {
            long long d = pow(y, 2) - y + 1;
            if(y % 2 == 1) {
                d -= (y - x);
            } else {
                d += (y - x);
            }
            cout << d << endl;
        } else if(x > y) {
            long long d = pow(x, 2) - x + 1;
            if(x % 2 == 1) {
                d += (x - y);
            } else {
                d -= (x - y);
            }
            cout << d << endl;
        } else {
            long long d = pow(y, 2) - y + 1;
            cout << d << endl;
        }
    }

    return 0;
}
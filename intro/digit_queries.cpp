#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q; cin >> q;
    while(q--) {
        int k; cin >> k;
        if(k <= 9) cout << k << endl;
        if(k > 9) {
        int i = 0;
        int rs = 0;
        int re = 0;
        for(i; i < 18; i++) {
            rs = (9*pow(10,i))*(i+1);
            re = (9*pow(10,i+1))*(i+2);
            if(k > rs && k <= re) {
                i++; break;
            }
        }
           int ans = 0;
           if(k % 2 == 1) {
               ans = 
           }
        }
    }

    return 0;
}
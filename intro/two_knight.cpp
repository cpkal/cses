#include <bits/stdc++.h>
using namespace std;

void solve(long long n) {
    n = n * n;
    
    long long pos = (n * (n - 1)) / 2;
    if(n >= 9) {
        long long sqrt_n = (sqrt(n)) - 2;
        long long suku_pertama = 1;
        long long jumlah_deret = 0;
        for(long long i = sqrt_n; i > 1; i--) {
            jumlah_deret += i;
        }
        jumlah_deret += suku_pertama;
        pos = pos - (8*jumlah_deret);
    }
    cout << pos << endl;
}

int main() {
    long long t; cin >> t;
    for(long long i = 1; i <= t;i++) {
        solve(i);
    }
    return 0;
}
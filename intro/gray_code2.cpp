#include <bits/stdc++.h>
#define biargakcapek int
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    biargakcapek n; cin >> n ;
    biargakcapek input;
    if( n > 16 && n < 1) {
        return 0;
    }
    else{
        input = pow(2, n)- 1;
    }
 
  biargakcapek desimal_awal = 0;
  biargakcapek desimal_akhir;
  desimal_akhir = input;
 
  for (biargakcapek desimal = desimal_awal; desimal <= desimal_akhir; desimal++) {
        biargakcapek graykode = desimal ^ (desimal >> 1);
        biargakcapek biner = 0;
        biargakcapek satu = 1;
 
        for (int i = 0; i < n; i++) {
            if (graykode & (1 << i)) {
                biner += satu;
            }
            satu *= 2;
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << ((biner >> i) & 1);
        }
        cout << endl;
    }
 
    return 0;
}
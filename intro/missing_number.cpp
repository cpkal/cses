#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int m[n - 1];
    for(int i = 0; i < n - 1; i++) {
        cin >> m[i];
    }
    sort(m, m + n - 1);
    int i = 0;
    for(i; i < n - 1; i++) {
        if(m[i] != i + 1) break;
    }
    
    cout << i + 1 << endl;

    return 0;
}
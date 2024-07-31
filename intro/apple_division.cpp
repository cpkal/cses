#include <bits/stdc++.h>
using namespace std;

long long n = 0;

long long solve(long long i, long long s1, long long s2, long long a[]) {
    if(i == n) {
        return abs(s1-s2);
    }
    return min(solve(i+1, s1+a[i], s2, a), solve(i+1,s1,s2+a[i], a));
}

int main() {
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long ans = solve(0, 0, 0, a);
    cout << ans << endl;
    
    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    if(n <= 4) {
        cout << "NO SOLUTION";
    } else {
        int a = n - 1;
        int b = n;
        
        while(a > 0) {
            cout << a << " ";
            a-=2;
        }
        
        while(b > 0) {
            cout << b << " ";
            b-=2;
        }

    }
    
    return 0;
}
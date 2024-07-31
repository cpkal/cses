#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long p[n]; 
    for(int i = 1; i <= n; i++) {
        p[i] = i;
    }
    long long outter = p[n];
    long long inner = p[n-1] + p[n-2];
    int idx = n-3;
    int ic = 1;
    int oc = 2;
    vector<int> inner_group;
    vector<int> outter_group; 
    outter_group.push_back(p[n]);
    inner_group.push_back(p[n-1]);
    inner_group.push_back(p[n-2]);
    while(idx > 0) {
        if(outter > inner) {
            inner += p[idx];
            inner_group.push_back(p[idx]);
        } else {
            outter += p[idx];
            outter_group.push_back(p[idx]);
        }
        idx--;
    }
    
    if(outter- inner == 0) {
        cout << "YES" << endl;
        cout << inner_group.size() << endl;
        for(int i = 0; i < inner_group.size(); i++) {
            cout << inner_group[i] << " ";
        }
        cout << endl;
        cout << outter_group.size() << endl;
        for(int i = 0; i < outter_group.size(); i++) {
            cout << outter_group[i] << " ";
        }
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
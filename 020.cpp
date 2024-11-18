#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll bc = 1;
    for (int i = 0; i < b; i++) {
        bc *= c;
    }
    if (a < bc) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
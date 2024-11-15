#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll Q;
    cin >> Q;
    deque<ll> A;
    vector<ll> ans;
    for (int i = 0; i < Q; i++) {
        ll t, x;
        cin >> t >> x;
        if (t == 1) {
            A.push_front(x);
        } else if (t == 2) {
            A.push_back(x);
        } else if (t == 3) {
            cout << A[--x] << endl;
        }
    }
    return 0;
}
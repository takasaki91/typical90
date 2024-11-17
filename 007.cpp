#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), less<ll>{});
    vector<ll> ans;
    ll Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        ll b;
        cin >> b;
        auto iter = lower_bound(A.begin(), A.end(), b);
        ll l = abs(*iter - b);
        ll u = 1e9;
        if (iter != A.begin()) {
            iter--;
            u = abs(b - *iter);
        }
        ans.push_back(min(l, u));
    }
    for (int i = 0; i < Q; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
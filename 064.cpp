#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, Q;
    cin >> N >> Q;
    vector<ll> A(N + 2, 0);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    vector<ll> diff(N + 1, 0);
    ll sum = 0;
    for (int i = 1; i < N; i++) {
        diff[i] = A[i + 1] - A[i];
        sum += abs(diff[i]);
    }

    for (int i = 0; i < Q; i++) {
        int l, r, v;
        cin >> l >> r >> v;
        if (l - 1 > 0) {
            sum -= abs(diff[l - 1]);
            diff[l - 1] += v;
            sum += abs(diff[l - 1]);
        }
        if (r < N) {
            sum -= abs(diff[r]);
            diff[r] -= v;
            sum += abs(diff[r]);
        }
        cout << sum << endl;
    }

    return 0;
}
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N), B(N), C(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }
    vector<ll> aa(46, 0), bb(46, 0), cc(46, 0);
    for (int i = 0; i < N; i++) {
        aa[A[i] % 46]++;
        bb[B[i] % 46]++;
        cc[C[i] % 46]++;
    }
    ll ans = 0;
    for (int i = 0; i < 46; i++) {
        for (int j = 0; j < 46; j++) {
            for (int k = 0; k < 46; k++) {
                if ((i + j + k) % 46 == 0) {
                    ans += aa[i] * bb[j] * cc[k];
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
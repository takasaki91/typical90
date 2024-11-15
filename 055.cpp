#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, P, Q;
    cin >> N >> P >> Q;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                for (int l = k + 1; l < N; l++) {
                    for (int m = l + 1; m < N; m++) {
                        ll n = (((A[i] * A[j]) % P) * ((A[k] * A[l]) % P) % P) *
                               A[m] % P;
                        if (n % P == Q) {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
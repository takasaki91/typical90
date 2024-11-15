#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> C(2, vector<ll>(N + 1, 0));
    for (int i = 0; i < N; i++) {
        ll c, p;
        cin >> c >> p;
        c--;
        C[c][i + 1] = p;
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= N; j++) {
            C[i][j] += C[i][j - 1];
        }
    }
    ll Q;
    cin >> Q;
    vector<ll> A, B;
    for (int i = 0; i < Q; i++) {
        ll l, r;
        cin >> l >> r;
        l--;
        A.push_back(C[0][r] - C[0][l]);
        B.push_back(C[1][r] - C[1][l]);
    }

    for (int i = 0; i < Q; i++) {
        cout << A[i] << " " << B[i] << endl;
    }

    return 0;
}
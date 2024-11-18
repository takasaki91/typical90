#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mint = 1000000007;
int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> A(N, vector<ll>(6, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> A[i][j];
        }
    }
    vector<ll> S(N);
    for (int i = 0; i < N; i++) {
        S[i] = A[i][0] + A[i][1] + A[i][2] + A[i][3] + A[i][4] + A[i][5];
    }
    ll ans = 1;
    for (int i = 0; i < N; i++) {
        ans *= S[i];
        ans %= mint;
    }
    cout << ans << endl;
    return 0;
}
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mint = 1000000007;
int main() {
    ll N, L;
    cin >> N >> L;
    vector<ll> step(N + 1, 0);
    step[0] = 1;
    for (int i = 1; i <= N; i++) {
        if (i < L) {
            step[i] = step[i - 1];
        } else {
            step[i] = step[i - 1] + step[i - L];
        }
        step[i] %= mint;
    }
    cout << step[N] << endl;
    return 0;
}
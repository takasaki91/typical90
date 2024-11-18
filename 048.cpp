#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    vector<ll> p;
    for (int i = 0; i < N; i++) {
        p.push_back(B[i]);
        p.push_back(A[i] - B[i]);
    }
    sort(p.begin(), p.end(), greater<ll>{});
    ll ans = 0;
    for (int i = 0; i < K; i++) {
        ans += p[i];
    }
    cout << ans << endl;
    return 0;
}
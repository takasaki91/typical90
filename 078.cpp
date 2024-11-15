#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> G(N);
    for (int i = 0; i < M; i++) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 0; i < N; i++) {
        sort(G[i].begin(), G[i].end(), less<ll>{});
    }
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        if (distance(G[i].begin(), lower_bound(G[i].begin(), G[i].end(), i)) ==
            1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
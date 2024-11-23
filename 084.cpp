#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const ll mint = 1000000007;

int main() {
    ll N;
    string S;
    cin >> N >> S;
    vector<pair<char, ll>> vec;
    vec.push_back({S[0], 1});
    for (ll i = 1; i < N; i++) {
        if (vec.back().first != S[i]) {
            vec.push_back({S[i], 1});
        } else {
            vec.back().second++;
        }
    }
    ll ans = N * (N - 1) / 2;
    for (auto iter = vec.begin(); iter != vec.end(); iter++) {
        ans -= ((iter->second) * (iter->second - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}
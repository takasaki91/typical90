#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, A, B, C;
    cin >> N >> A >> B >> C;
    vector<ll> ans(3, 0);

    vector<ll> vec(3, 1e5);
    for (ll i = 0; i <= 9999; i++) {
        for (ll j = 0; j <= 9999 - i; j++) {
            ll val = (N - A * i - B * j);
            if (val < 0) {
                break;
            }
            if (val % C == 0) {
                ll val_0 = i;
                ll val_1 = j;
                ll val_2 = val / C;
                if (vec[0] + vec[1] + vec[2] > val_0 + val_1 + val_2) {
                    vec[0] = val_0;
                    vec[1] = val_1;
                    vec[2] = val_2;
                }
            }
        }
    }
    ans[0] = vec[0];
    ans[1] = vec[1];
    ans[2] = vec[2];
    cout << ans[0] + ans[1] + ans[2] << endl;
    return 0;
}
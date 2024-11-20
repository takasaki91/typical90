#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll n) {
    ll ret = 1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ret = i;
            break;
        }
    }
    return ret;
}

const ll mint = 1000000007;
int main() {
    ll N;
    cin >> N;
    queue<ll> que;
    que.push(N);
    int cnt = 0;
    while (que.size() != 0) {
        ll val = que.front();
        que.pop();
        ll v1 = func(val);
        if (v1 != 1) {
            cnt++;
            que.push(val / v1);
        } else {
            cnt++;
        }
    }
    cout << ceil(log2(cnt)) << endl;

    cout << (int)ceil(log2(cnt)) << endl;
    return 0;
}
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
    list<pair<ll, int>> ls;
    for (int i = 0; i < N; i++) {
        pair<ll, int> l;
        l.first = B[i];
        l.second = i;
        ls.push_back(l);
    }
    ls.sort([](pair<ll, int> a, pair<ll, int> b) { return a.first > b.first; });
    priority_queue<ll> que;
    for (int i = 0; i < N; i++) {
        que.push(B[i]);
    }
    ll ans = 0;
    for (int i = 0; i < K; i++) {
        ll tmp = que.top();
        ans += tmp;
        que.pop();
        if (ls.size() > 0) {
            que.push(A[ls.front().second] - B[ls.front().second]);
            ls.erase(ls.begin());
        }
    }
    cout << ans << endl;
    return 0;
}
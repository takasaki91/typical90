#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> A(N, vector<ll>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    ll M;
    cin >> M;
    vector<int> runner(N);
    for (int i = 0; i < N; i++) {
        runner[i] = i;
    }
    vector<vector<bool>> isrun(N, vector<bool>(N, true));
    for (int i = 0; i < M; i++) {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        isrun[x][y] = false;
        isrun[y][x] = false;
    }
    ll ans = 1e9;
    do {
        bool flag = true;
        for (int i = 0; i < N - 1; i++) {
            if (isrun[runner[i]][runner[i + 1]] == false) {
                flag = false;
            }
        }
        if (!flag) {
            continue;
        }
        ll tmp_sum = 0;
        for (int i = 0; i < N; i++) {
            tmp_sum += A[runner[i]][i];
        }
        ans = min(ans, tmp_sum);
    } while (next_permutation(runner.begin(), runner.end()));
    if (ans == 1e9) {
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}
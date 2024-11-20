#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mint = 1000000007;
int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W, 0)), B(H, vector<ll>(W, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> B[i][j];
        }
    }
    ll ans = 0;
    for (int i = 0; i < H - 1; i++) {
        for (int j = 0; j < W - 1; j++) {
            if (A[i][j] != B[i][j]) {
                ll diff = B[i][j] - A[i][j];
                ans += abs(diff);
                for (int y = i; y < i + 2; y++) {
                    for (int x = j; x < j + 2; x++) {
                        A[y][x] += diff;
                    }
                }
            }
        }
    }
    bool flag = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (A[i][j] != B[i][j]) {
                flag = false;
            }
        }
    }
    if (flag) {
        cout << "Yes" << endl;
        cout << ans << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
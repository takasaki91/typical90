#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    vector<ll> Sum_row(H, 0), Sum_col(W, 0);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            Sum_row[i] += A[i][j];
            Sum_col[j] += A[i][j];
        }
    }
    vector<vector<ll>> B(H, vector<ll>(W, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            B[i][j] = Sum_row[i] + Sum_col[j] - A[i][j];
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (j != 0) {
                cout << " ";
            }
            cout << B[i][j];
        }
        cout << endl;
    }
    return 0;
}
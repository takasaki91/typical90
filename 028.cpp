#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> S(1002, vector<int>(1002, 0));
    for (int i = 0; i < N; i++) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        S[ly + 1][lx + 1]++;
        S[ly + 1][rx + 1]--;
        S[ry + 1][lx + 1]--;
        S[ry + 1][rx + 1]++;
    }
    for (int i = 0; i < 1002; i++) {
        for (int j = 1; j < 1002; j++) {
            S[i][j] += S[i][j - 1];
        }
    }
    for (int i = 1; i < 1002; i++) {
        for (int j = 0; j < 1002; j++) {
            S[i][j] += S[i - 1][j];
        }
    }
    vector<int> ans(N + 1, 0);
    for (int i = 0; i < 1002; i++) {
        for (int j = 0; j < 1002; j++) {
            ans[S[i][j]]++;
        }
    }
    for (int i = 1; i < N + 1; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
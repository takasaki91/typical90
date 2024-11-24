#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> F(H, vector<int>(W, 0));
    dsu uf(H * W);
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int t;
        cin >> t;
        int dc[] = {0, 1, 0, -1};
        int dr[] = {-1, 0, 1, 0};
        if (t == 1) {
            int r, c;
            cin >> r >> c;
            r--;
            c--;
            F[r][c]++;
            for (int j = 0; j < 4; j++) {
                int rr = r + dr[j];
                int cc = c + dc[j];
                if (rr < 0 || rr >= H || cc < 0 || cc >= W) {
                    continue;
                }
                if (F[rr][cc] != 0) {
                    uf.merge(r * W + c, rr * W + cc);
                }
            }
        } else if (t == 2) {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            ra--;
            ca--;
            rb--;
            cb--;
            if (F[ra][ca] != 0 && F[rb][cb] != 0 &&
                uf.same(ra * W + ca, rb * W + cb)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
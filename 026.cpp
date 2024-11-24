#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> G(N);
    vector<int> ans(N, -1);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    queue<int> que;
    que.push(0);
    ans[0] = 0;
    while (que.size() != 0) {
        int n = que.front();
        vector<int> vec = G[n];
        que.pop();
        for (int i = 0; i < (int)vec.size(); i++) {
            if (ans[vec[i]] == -1) {
                ans[vec[i]] = 1 - ans[n];
                que.push(vec[i]);
            }
        }
    }
    int cnt = count(ans.begin(), ans.end(), 0);
    if (cnt * 2 >= N) {
        int ans_cnt = 0;
        for (int i = 0; i < N; i++) {
            if (ans_cnt * 2 < N) {
                if (ans[i] == 0) {
                    cout << i + 1 << " ";
                    ans_cnt++;
                }
            }
        }
        cout << endl;
    } else {
        int ans_cnt = 0;
        for (int i = 0; i < N; i++) {
            if (ans_cnt * 2 < N) {
                if (ans[i] == 1) {
                    cout << i + 1 << " ";
                    ans_cnt++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
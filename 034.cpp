#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int l = 0;
    int r = 0;
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        mp[A[i]]++;
        r++;
        while ((int)mp.size() > K) {
            int val = A[l];
            mp[val]--;
            l++;
            if (mp[val] == 0) {
                mp.erase(val);
            }
        }
        ans = max(ans, r - l);
    }
    cout << ans << endl;
    return 0;
}
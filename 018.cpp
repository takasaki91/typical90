#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    double T;
    cin >> T;
    double L, X, Y;
    cin >> L >> X >> Y;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        double e;
        cin >> e;
        double y, z;
        y = -(L / 2) * sin(e / T * 2 * M_PI);
        z = (L / 2) - (L / 2) * cos(e / T * 2 * M_PI);
        double dx = X;
        double dy = abs(Y - y);
        double dz = z;
        double d_xy = sqrt(dx * dx + dy * dy);
        double ans = atan2(dz, d_xy);
        cout << fixed << setprecision(10) << ans * 180.0 / M_PI << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int t) {
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        int th = 0;
        

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            th += count(a[i].begin(), a[i].end(), '#');
        }

        int g = (th + 1) / 2;
        int c = 0;
        int p = 0, q = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '#') {
                    c++;
                    if (c == g) {
                        p = i;
                        q = j;
                        break;
                    }
                }
            }
            if (c == g) break;
        }

        cout << p + 1 << " " << q + 1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    solve(t);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int dem[1000001] = {0};

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        fill(dem, dem + 1000001, 0);
        for (int i = 0; i < n; i++) {
            dem[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (dem[a[i]] % 2 == 1) {
                cout << a[i] << endl;
                break;
            }
        }
    }
    return 0;
    }


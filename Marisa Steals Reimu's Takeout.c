#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        int w;
        scanf("%d", &w);

        if (w == 0)
            c0++;
        else if (w == 1)
            c1++;
        else if (w == 2)
            c2++;
    }

    int ans = c0;

    int m = (c1 < c2) ? c1 : c2;

    ans += m;
    ans += (c1 - m) / 3;
    ans += (c2 - m) / 3;

    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}

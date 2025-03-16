#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, h;
        cin >> h >> x >> y;
        h = h - y;
        if (h % x == 0)
        {
            cout << 1 + h / x << '\n';
        }
        else
        {
            cout << 2 + h / x << '\n';
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int rb = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            rb += a[i];
        }
        else if (a[i] == 0 && rb)
        {
            a[i] = 1;
            rb--;
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

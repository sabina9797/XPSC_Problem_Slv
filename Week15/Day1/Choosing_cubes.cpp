#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int v = a[f - 1];
    sort(a.begin(), a.end(), greater<int>());
    int cnt1 = 0, cnt2 = 0;
    for (int i : a)
    {
        if (i > v)
        {
            cnt1++;
        }
        else if (i == v)
        {
            cnt2++;
        }
    }
    if (cnt1 >= k)
    {
        cout << "NO" << endl;
    }
    else if (cnt1 + cnt2 <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "MAYBE" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> mp;
    int left = 0, m = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp.count(a[i]) && mp[a[i]] >= left)
        {
            left = mp[a[i]] + 1;
        }
        mp[a[i]] = i;
        m = max(m, i - left + 1);
    }

    cout << m <<endl;;
    return 0;
}

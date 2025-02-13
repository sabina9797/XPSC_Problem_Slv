#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(k);

        for (long long i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long ans = 0;

        for (long long i = 0; i < k - 1; i++)
        {
            ans += (a[i] - 1) + a[i];
        }
        cout << ans << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, q;
    cin >> n ;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;
        
       long long  cnt1 = lower_bound(a.begin(), a.end(), l) - a.begin();
        long long cnt2  = upper_bound(a.begin(), a.end(), r) - a.begin();
       // ans = cnt2 - cnt1;
        cout << cnt2-cnt1 << " ";
    }

    return 0;
}

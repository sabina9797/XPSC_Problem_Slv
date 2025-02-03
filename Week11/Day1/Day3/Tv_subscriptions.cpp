#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, d;
       cin >>n>>k>>d;
        vector<ll>a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        ll mn = LLONG_MAX;
        //vtr frq(k + 1, 0);
         vector<ll>frq(k+1,0);
        ll l = 0, r = 0;
        ll cnt = 0;
        while (r < n)
        {
            if (frq[a[r]] == 0)
            {
                cnt++;
            }
            frq[a[r]]++;
            if (r - l + 1 == d)
            {
                mn = min(mn, cnt);
                frq[a[l]]--;
                if (frq[a[l]] == 0)
                {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        cout << mn << '\n';
    }
    return 0;
}

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
        int n, k;
        cin >> n >> k;
        string ss;
        cin >> ss;
        int l = 0, r = 0, count = 0, ans = 0;
        while (r < n)
        {

            if (r - l + 1 == k)
            {
                if (ss[l] == 'B')
                {
                    ans++;
                    l += k;
                    r += k;
                }
                else
                {
                    l++;
                    r++;
                }
            }
            else
            {
                r++;
            }
        }
        if (l != n)
        {
            for (int i = l; i < n; i++)
            {
                if (ss[i] == 'B')
                {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}

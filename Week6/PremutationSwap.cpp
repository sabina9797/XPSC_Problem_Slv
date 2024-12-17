#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long long x;
        ;
        long long ans = 0;
        for (long long i = 1; i <= n; i++)
        {
            cin >> x;
            if (abs(x - i) != 0)
            {
                ans = __gcd(ans, abs(x - i));
            }
        }

        cout << ans << endl;
    }

    return 0;
}

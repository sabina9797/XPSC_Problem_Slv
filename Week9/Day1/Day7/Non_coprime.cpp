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
        long long l, r;
        cin >> l >> r;

        if (r < 4)
        {
            cout << -1 << endl;
            continue;
        }

        if (l == r)
        {
            bool ok = false;
            for (long long i = 2; i <= sqrt(r); i++)
            {

                if (r % i == 0)
                {
                    int a, b;
                    a = i;
                    b = (r / i - 1) * i;
                    cout << a << " " << b << endl;
                    ok = true;
                    break;
                }
            }

            if (!ok)
            {
                cout << "-1" << '\n';
            }
        }
        else
        {
            while (r >= l && r % 2 != 0)
            {
                r--;
            }
            cout << r / 2 << " " << r / 2 << endl;
        }
    }

    return 0;
}

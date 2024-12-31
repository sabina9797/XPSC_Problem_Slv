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
        long long a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
            continue;
        }

        // long long z = 2* a * b;
        long long x = a;
        long long y = a * b*(b-1);
        long long z = x +y;
        cout<<"YES\n" <<x<<" "<<y <<" "<<z<<endl;
    }

    return 0;
}

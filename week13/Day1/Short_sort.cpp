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
        string ss;
        cin >> ss;
        bool ok = false;

        if (ss[0] == 'a' || ss[1] == 'b' || ss[2] == 'c')
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
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
        int a, b, c;
        cin >> a >> b >> c;
        bool f = false;

        if (c >= a && c >= b)
        {
            int d1 = a + b;
            int d2 = a - b;
            if (d1 == c || d2 == c)
            {
                f = true;
                //break;
            }
        

        if (f)
        {
            cout << "+" << '\n';
        }
        else
        {
            cout << "-" << '\n';
        }
    }else{
        cout << "-" << '\n';
    }
    }

    return 0;
}

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
        int n;
        cin >> n;
        string ss;
        cin >> ss;
        int cnta = 0;
        int cntb = 0;
        int cntc = 0;
        int cntd = 0;
        // int cnta=0;

        for (char i : ss)
        {
            if (i == 'A')
                cnta++;
            else if (i == 'B')
                cntb++;
            else if (i == 'C')
                cntc++;
            else if (i == 'D')
                cntd++;
                
        }
        int m1 = min(cnta, n);

        int m2 = min(cntb, n);
        int m3 = min(cntc, n);
        int m4 = min(cntd, n);
        int total_ans = m1 + m2 + m3 + m4;
        cout << total_ans << endl;
    }

    return 0;
}

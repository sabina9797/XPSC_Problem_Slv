#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        // vector<int>
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            cout << "Yes\n";
        }
        int cnt_sa = 0, cnt_ta = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                cnt_sa++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (t[i] == 'a')
            {
                cnt_ta++;
            }
        }
        int cnt_sb = 0, cnt_tb = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                cnt_sb++;
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (t[i] == 'b')
            {
                cnt_tb++;
            }
            else
            {
                break;
            }
        }
        if (cnt_sa == 0 && cnt_ta==0)
        {
            if (s == t)
            {
                cout << "Yes\n";
                continue;
            }
            else
            {
                cout << "No\n";
                continue;
            }
        }
        if (s[0] != t[0] || cnt_sa != cnt_ta || cnt_sb != cnt_tb)
        {
            cout << "No" << endl;
            continue;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}

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
        string ss;
        cin >> ss;
        set<char> st(ss.begin(), ss.end());
        vector<char> v(st.begin(), st.end());

        vector<char> v2 = v;
        reverse(v2.begin(), v2.end());
        string sss = ss;
        for (int i = 0; i < ss.size(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (ss[i] == v[j])
                {
                    sss[i] = v2[j];
                    break;
                }
            }
        }

        cout << sss << '\n';
    }

    return 0;
}
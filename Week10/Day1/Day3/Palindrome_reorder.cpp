#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);

    string ss;
    cin >> ss;

    int freq[26] = {0};
    for (char ch : ss)
    {
        freq[ch - 'A']++;
    }
    int oddcnt = 0;
    char odd = '\0';
    int even = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            oddcnt++;
            odd = 'A' + i;
        }
    }
    if (oddcnt > 1)
    {
        cout << " NO SOLUTION\n";
        return 0;
    }
    string sss = "";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i] / 2; j++)
        {
            sss += 'A' + i;
        }
    }
    string p = sss;
    if (oddcnt == 1)
    {
        p+=odd;
    }
    reverse(sss.begin(),sss.end());
    p +=sss;
    cout <<p<<endl;

    return 0;
}

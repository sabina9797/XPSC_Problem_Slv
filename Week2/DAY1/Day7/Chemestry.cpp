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
        map<char,int>freq;
        string ss;
        cin >> ss;
        for (auto i: ss)
        {
            freq[i]++;
        }
        int cnt = 0;
        for (auto i : freq)
        {
           
            if (i.second% 2 != 0)
            {
                cnt++;
            }
        }
        
        int p=cnt-k;
        if (p<=1)
        {
            cout << "YES\n";
        }else
        {
            cout << "NO\n";
        }
    }

    return 0;
}

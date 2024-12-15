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
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            vector<long long> ans;
            for (int j = i; j < n; j++)
            {
                ans.push_back(a[j]);
            }

            for (int j = 0; j < i; j++)
            {
                ans.push_back(a[j]);
            }

            bool ok =true;
            
            for (int j = 0; j < n - 1; j++)
            {
                if (ans[j] > ans[j + 1])
                {
                    ok =false ;
                    break;
                }
            }
        
        
            if (ok)
            {
                found = true;
                break;
            }
        }
            if(found)
            {
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    

    return 0;
}

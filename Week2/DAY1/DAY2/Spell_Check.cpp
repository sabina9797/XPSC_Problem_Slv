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
        string s;
        cin >> s;
    bool found = false;
        string ss = "Timur";
        sort(ss.begin(), ss.end());
        if (n == 5)
        {
             sort(s.begin(), s.end());
             if(s == ss){
                found = true;

             }
             if(found)
             {
                cout<<"YES\n";
             }else{
                 cout<<"NO\n";
             }

        }else{
            cout<<"NO\n";
        }

    }

    return 0;
}

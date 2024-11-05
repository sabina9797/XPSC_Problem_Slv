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
         string s1,s2;
         cin >> s1 >> s2;
         int count =0;
        // bool f = false;
         for(int i=0; i<n ; i++)
         {
            if(s1[i] != s2[i])
            {
                if(s1[i] == 'G')
                {
                    s1[i] = 'B';
                }
                if(s2[i] == 'G')
                {
                    s2[i] = 'B';
                }
            }
            if(s1[i] == s2[i]) 
            {
                count++;

            }
         }
        // cout<<count<<'\n';
        if(count == n)
        {
            cout << "YES" <<'\n';
        }else{
            cout << "NO" <<'\n';
        }

    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    long long tt;
    cin >> tt;
    while (tt--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
         bool t=true;
         bool p=false;
        while (a.size() > 1)
        {
            if(t)
            {
            auto i = a.begin();
            a.erase(i);
            t=false;
            p=true;
        }else if(p)
        {
            
            auto i = a.end()-1;
            a.erase(i);
            t=true;
            p=false;
        
        }
    }
    cout<<a[0]<<'\n';
    }

    return 0;
}

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
        long long sum = 0;
        for (long long i = 1; i < n; i++)
        {
            sum += abs(a[i] - a[i - 1]);
        }
        cout<<sum<<endl;
    }

        return 0;
    }

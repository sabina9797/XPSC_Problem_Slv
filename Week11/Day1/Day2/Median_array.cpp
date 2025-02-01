// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<long long> a(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long mid = ((n + 1) / 2)-1;
    int cnt = 0;
    for (long long i = mid; i < n; i++)
    {
        if (a[i] == a[mid])
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;

        cin >> n;
        solve(n);
    }
}
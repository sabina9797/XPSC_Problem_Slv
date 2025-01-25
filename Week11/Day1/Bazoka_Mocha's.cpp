#include <bits/stdc++.h>
using namespace std;
long long solve(long long n)
{
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long len = arr.size();
    long long cnt = 0;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > arr[(i + 1) % n])
        {
            cnt++;
            if (cnt > 1)
            {
                return false;
            }
        }
    }
    return true;
}
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
       
        if (solve(n))
        {
            cout<<"Yes\n";
        }else{
             cout<<"No\n";
        }
    }

    return 0;
}

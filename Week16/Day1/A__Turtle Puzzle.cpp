#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }

    int ans = 0;
    int current_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            current_sum += (-arr[i]);
            ans = max(ans, current_sum);
        }
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }

    int total_sum = sum + ans;
    cout << total_sum << endl;
}

int main()
{
    // For fast input/output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

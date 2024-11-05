#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int cnt = 0;
    int day_problems = 1;
    while (!ml.empty())
    {
        auto LB = ml.lower_bound(day_problems);
        if (LB != ml.end())
        {
            cnt++;
            ml.erase(LB);
        }
        else
        {
            break;
        }
        day_problems++;
    }
    cout << cnt << endl;
    return 0;
}

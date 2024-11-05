#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a1(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a1[i];
    }
    set<int> st;
    for (int i = n; i >= 1; i--)
    {
        st.insert(a1[i]);
        cnt[i] = st.size();
    }
    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << '\n';
    }

    return 0;
}

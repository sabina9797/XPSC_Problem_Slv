#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    vector<int> v(q);
   
    while(q--)
    {
        int m;
        cin >> m;
        auto cnt =upper_bound(a.begin(),a.end(),m);
        cout<<cnt-a.begin()<<'\n';
    }

    return 0;
}

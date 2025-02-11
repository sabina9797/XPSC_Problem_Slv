#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,s,m;
    cin >> n >> s>>m;
    vector<pair<int ,int> >a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first>>a[i].second;
    }
    if(n==0 || a[0].first>=s)
    {
        cout<<"YES"<<endl;
    return;
    }
    for(int i=1; i<n; i++){
        if(a[i].first-a[i-1].second>=s)
        {
            cout<<"YES\n";
            return;
        }
    }
    if(m-a[n-1].second>=s)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";

}
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

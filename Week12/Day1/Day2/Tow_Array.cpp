#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,s,m;
    cin >> n ;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }for(int i=0; i<n; i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
   for(int i=0; i<n; i++)
   {
    if (!(a[i] == b[i] || a[i] + 1 == b[i]))

    {
        cout<<"NO\n";
        return ;
    }
   }
   cout<<"YES\n"; 
   
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

 

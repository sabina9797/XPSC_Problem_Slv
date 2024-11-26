#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
     vector<int>frq(n+1,0);
     int cnt=0;
     for(int i=0; i<n; i++)
     {
     
     while(frq[a[i]]>0)
     {
        frq[a[cnt]]--;
        cnt++;
     }
     frq[a[i]]++;
     } 
     cout << cnt<<endl;

}
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

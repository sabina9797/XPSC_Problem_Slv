#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long  a,b;
    cin >> a>>b;
    //vector<int> a(n);
    if(b%2==0 && a%2==0  )
    {
        cout<<"YES"<<'\n';
    }else if(b%2==1)
    {
        if(a>=2)
        {
            a-=2;
            if(a%2==0)
            {
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
        }
        else{
            cout<<"NO"<<'\n';
        }
    }else{
        cout<<"NO"<<'\n';
    }
  
    
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
        solve();
    }

    return 0;
}

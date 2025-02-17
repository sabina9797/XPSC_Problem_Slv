#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
   // vector<int> a(n);
    long long odd = k/2;
   // long long l = n - k + 1;
   
        if (k % 2 == 1 && n%2==1)
        {
            odd++;
        }
        if(odd%2==1)
        {
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
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

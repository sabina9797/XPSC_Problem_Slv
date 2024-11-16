#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{

    int t;
    in t;
    while (t--)
    {
      ll n;
      in n;
      vtr a(n);
      for(int i=0; i<n; i++)
      {
        cin >> a[i];
      }
      srt(a);
      ll ans = LLONG_MAX;
      if(n<3)
      {
        pr "0" nl;
      }else{
         ans = min(ans,a[n-1] - a[2]);
         ans = min(ans,a[n-3] - a[0]);
         ans = min(ans,a[n-2] - a[1]);
      }
      pr ans nl;
    }
    
    return 0;
}

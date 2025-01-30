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
  vtr a(t);
  vtr p(t + 1);
  for (ll i = 0; i < t; i++)
  {
    in a[i];
    p[a[i]] = i;
  }
  long long roundcnt = 1;
  for (ll i = 2; i <= t; i++)
  {
    if (p[i] < p[i - 1])
    {

      roundcnt++;
    }
  }
  cout << roundcnt << endl;

  return 0;
}

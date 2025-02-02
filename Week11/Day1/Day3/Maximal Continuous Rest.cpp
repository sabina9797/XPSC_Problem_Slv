#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main()
{
       ll n ;
       cin>>n;
       vtr a(n);
       for(ll i=0; i<n; i++)
       {
       in a[i];
       }
       ll cnt=0,maxi = 0;
        for(ll j=0; j<2*n; j++)
       {
        while(a[j%n] ==1)
        {
            cnt++;
            j++;
        }
        maxi = max(cnt,maxi);
        cnt=0;
       }

    cout<<maxi<<'\n';
 
  return 0;
}
 

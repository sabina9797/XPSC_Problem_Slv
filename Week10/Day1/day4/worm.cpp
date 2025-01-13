#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   long long n;
   cin >> n;
   vector<long long>a(n);
  
   for(long long i=0; i<n; i++)
   {
    cin >> a[i];
   }
   long long m;cin>>m;

    vector<long long>q(m);
    for(long long i=0; i<m; i++)
   {
    cin >> q[i];
   }
    vector<long long>a1(n);
    a1[0] = a[0];
    for(long long i=1; i<n; i++)
   {
    a1[i] = a1[i-1] + a[i];
   }
vector<long long>ans(m);
for(long long i=0; i<m;i++ )
{
    long long w = q[i];
    long long l = lower_bound(a1.begin(),a1.end(),w)-a1.begin()+1;
    ans[i] = l;
}
for(long long i=0; i<m; i++)
   {
    cout << ans[i]<<'\n';
   }

 
  return 0;
}
 

#include<bits/stdc++.h>
using namespace std;
long long solve (long long j)
{
    int cnt =0;
    while(j>0)
    {
        if(j &1)cnt++;
         j=j>>1;
    }
    return cnt;
   
}
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int t;
   cin >> t;
   while(t--) 
   {
    long long n,q;
    cin >> n >>q;
    vector<long long>a(n+1,0);
     vector<long long>v(n+2,0);
    for(long long i=1; i<=n; i++)
    {
        cin>> a[i];
    }
    /*map<long  long,vector<long long>>mp;
    vector<long long>res;
    for(long long i: a)
    {
        long long ans = solve(i);
        mp[ans].push_back(i);
    }
    for(auto it : mp)
    {
        sort(it.second.begin(),it.second.end());
    }
    

   }
 */
for(long long i=1; i<=n; i++)
{
    v [i] = (a[i] + v[i-1]);
}
vector<long long>ans(q);
vector<pair<long long,int> >k(q);
for(long long i=0; i<q; i++)
{
    cin >> k[i].first;
    k[i].second=i;
}
sort(k.begin(),k.end());
long long  cnt = 0;
for(long long i=0; i<q; i++)
{
    while(true)
    {
        if(cnt ==n or a[cnt+1]>k[i].first)break;
        cnt++;
        
    }

ans[k[i].second] == v[cnt];
   }
   for(long long i=0; i<q; i++)
   {
    cout << ans[i] <<" ";
   }
   cout<<'\n';
}
  return 0;
}
 

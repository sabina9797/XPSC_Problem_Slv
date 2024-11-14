#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;
   int t;
   cin >> t;
   while(t--)
   {
    long long n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int cnt =0,ans=0;
    long long sum =0;
    for(int i=0; i<n; i++)
    {
       sum +=abs(a[i]);
    }
    bool f = false;
    for(int i=0; i<n; i++)
    {
      if(a[i]<0){
       if(!f)
       {
        cnt++;
        f = true;
       }
      }else if(a[i]>0){
        f = false;
        ans+=cnt;
        cnt=0;
      }
    }
    if(f)
    ans++;
    cout << sum <<" "<<ans<<'\n';
   } 

 
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;
   int q; 
   cin >> q;
     while(q--)
     {
        long long a,b,n,s; cin >> a>>b >>n>>s;
        long long r = s/n;
        long long  ans = min(a,r) *n;
        long long ans1 = s - ans;
        if(ans1<b)
        {
            cout<<"YES" <<endl;

        }else{
            cout<<"NO" <<endl;
        }

     }
 
  return 0;
}
 

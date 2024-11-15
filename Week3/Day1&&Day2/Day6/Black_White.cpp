#include <bits/stdc++.h>
using namespace std;

int main()
{
   // for fast input output
   ios ::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
      while(t--)
      {
         long long n, k;
         cin>>n >> k;
         string ss;
         cin>>ss;
         int count =0,l=0,r=0,ans =INT_MAX;
         while(r<n)
         {
            if(ss[r] == 'W')
            {
                count++;

            }
            if(r - l +1 ==k){
                ans = min(ans,count);
                if(ss[l] !='B')
                count--;
                l++;
                r++;
            }else{
                r++;
            }
         }
        cout << ans << endl;
   
      }
      
   
       return 0;
}

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
         long long n;
         cin>>n;
         string ss;
         cin>>ss;
         int count1 =0,count2=0,l=0,r=0,ans =INT_MAX;
         
           while(r<n)
           {
                if(r == 0 || ss[r] !=ss[r-1])
                {
                    if(ss[r] == '0')
                    {
                        count1++;
                    }else{
                        count2++;
                    }
                  
                }
                r++;
               // ans = min(ans,min(count1,count2));
           }
           ans = min(ans,min(count1,count2));
           cout<<ans<<'\n';
   
      }  
}


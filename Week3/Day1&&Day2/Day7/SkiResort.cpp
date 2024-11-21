#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long>a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long  count1 = 0,count2=0 ,l = 0, r = 0, ans = INT_MAX;

        for( long long i=0; i<n; i++)
        {
            if(a[i]<=q)
            {
                count1++;
                //l=r+1;
            }else{
                count1=0;
            }
            if(count1>=k)
            {
                count2 = count2+(count1-k+1);
            }
        }
       
            
            
             cout<<count2<<'\n';
        }
       
    
 
  return 0;
}
 

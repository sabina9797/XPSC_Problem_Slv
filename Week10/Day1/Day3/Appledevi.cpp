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
   long long sum1 =0;
   for(long long i=0; i<n; i++)
   {
    cin >> a[i];
    sum1+=a[i];
   }
   long long diff = LLONG_MAX;
   for(long long i =0; i<(1<<n); i++)
   {
   long long sum2 = 0;
    for(long long j =0; j<n; j++)
    {
        if(i &(1 << j))
        {
            sum2+=a[j];
        }
    }
    long long sum = sum1-sum2;
   long long d = abs(sum2-sum);
   diff = min(diff,d);
   }
   cout << diff <<'\n';
 
  return 0;
}
 

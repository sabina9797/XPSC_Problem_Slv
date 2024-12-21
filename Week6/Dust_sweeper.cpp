#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int t;
   cin>>t;
   while(t--) 
   {
    long long n;
    cin>>n;
    vector<long long>a(n);
    long long p=-1;
    long long ans=0;
    for(long long i=0; i<n; i++)
    {
        cin >> a[i];
        if(p==-1 && a[i]>0)
        {
            p=i;
        }

    }
    if(p==-1 || p==n-1)
    {
        cout<<0<<endl;
       continue;
    }
    for(long long i=p; i<n-1 ;i++)
    {
        ans+=a[i];
        if(a[i] ==0)
        {
            ans++;
        }

    }
    cout<<ans<<endl;



   }
 
  return 0;
}
 

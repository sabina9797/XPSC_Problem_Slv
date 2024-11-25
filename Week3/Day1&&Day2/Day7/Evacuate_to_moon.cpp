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
    int n,m,h;
    cin >> n >> m >> h;
    vector<long long>a1(n);
    vector<long long>a2(m);
    for(long long i=0; i<n; i++)
    {
        cin >> a1[i];
    }
     for(long long i=0; i<m; i++)
    {
        cin >> a2[i];
    }
    //long long mx = LLONG_MIN;
    sort(a1.begin(),a1.end(),greater<long long>());
    sort(a2.begin(),a2.end(),greater<long long>());
   
     long long TEnergy = 0;
     long long len = min(n,m);
     for(long long i=0; i<len; i++)
    {
        TEnergy +=min(a1[i],a2[i]*h);
    }
   
   
    
    cout << TEnergy <<endl;
   }
 
  return 0;
}
 

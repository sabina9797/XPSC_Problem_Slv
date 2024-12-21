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
    long long n,k,l,r;
    cin>>n>>k;
    vector<long long>a(n);
  
    for(long long i=0; i<n; i++)
    {
       
        cin >> a[i];
    }
   sort(a.begin(),a.end());
   a.push_back(-1);
  
   long long cnt =0;
vector<long long>v;
for(long long i=0; i<n; i++)
    {
       cnt++;
       if(a[i] !=a[i+1])
       {
        if(cnt>=k)
        {
            v.push_back(a[i]);
        }
        cnt=0;
       }
        
    }
    if(v.size() ==0)
    {
        cout<<"-1"<<'\n';
       continue;
    }
    long long d=-1, xx = v[0],ll=v[0],rr=v[0];
    for( auto i =0; i<v.size(); i++)
    {
        if(i == v.size()-1 || v[i]+1 <v[i+1])
        {
          
            if(v[i]-xx> d)
            {
            d = v[i] -xx;
            ll = xx;
            rr = v[i];
            }
            if(i!=v.size()-1)
            {
                xx = v[i+1];
            }
            
        }
        
           
        }
        cout<<ll <<" "<<rr<<endl;
        
    }
    



   
 
  return 0;
}
 

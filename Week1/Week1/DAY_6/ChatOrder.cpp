#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ; 
   int n;
   cin >> n;
   string ss;
   vector<string>a(n);
   map<string ,int>mp;
   for(int i=0; i<n ;i++)
   {
    cin >> a[i];
    //mp[a[i]] ++;
    
   }
   for(int i=n-1; i>=0 ;i--)
   {
    if(mp[a[i]] !=1)
    {
       cout<<a[i]<<'\n';
       mp[a[i]] ++;
   }
   }

  
  return 0;
}


 

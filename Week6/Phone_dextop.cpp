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
    int x,y;
    cin >> x >>y;
    int cnt = (y+1)/2;
    int rem = ((y/2)*7) + ((y%2)*11);
    int ans  = max(0,x-rem);
    cnt+=(ans+14)/15;
    cout<<cnt<<endl;
   }
 
  return 0;
}
 

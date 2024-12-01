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
    int n,c;
   cin >> n >> c;
   map<long long,int>mp;
   for(int i=0; i<n; i++) 
   {
    long long a; cin >>a;
    long long ans = a+ (i+1);
    mp[ans] ++;
    
   }
   int res = 0;
   for(auto &[ans, cnt] : mp)
   {
    while(cnt>0 && c>=ans)
    {
        res++;
        c-=ans;
        cnt--;
    }
    if(c<ans){
        break;
    }
   
   }
    cout<<res<<endl;
   }
 
  return 0;
}
 

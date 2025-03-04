#include<bits/stdc++.h>
using namespace std;
int solve(int x)
{
    int ans = 1,maxValue = __gcd(x,1) +1;
    for(int y=2; y<x; y++)
    {
        int xy = __gcd(x,y);
        int current= xy+y;
        if(current>maxValue)
        {
            maxValue = current;
            ans = y;
        }
    }
    return ans ;
}
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;
   int t;
   cin >> t;
   while(t--) 
   {
    int x;cin >>x;
    cout<<solve(x)<<'\n';
   }

 
  return 0;
}
 

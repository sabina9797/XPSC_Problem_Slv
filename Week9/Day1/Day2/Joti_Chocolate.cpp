#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long  b)
{
    return __gcd(a,b);
}
long long lcm(long long a,long long b)
{
    return(a/__gcd(a,b)) *b;
}
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ; 
   long long n,a,b,p,q;
   cin >> n >> a >> b >> p >>q;
   //gcd(a,b);
   //lcm(a,b);
   long long x = (n/a) *p ,y = (n/b) *q;
   long long overlap = (n/lcm(a,b));
   long long ans = ((x+y)- (overlap *(p+q)) )  +(overlap * max(p,q)) ;
   cout<<ans<<'\n';

 
  return 0;
}
 

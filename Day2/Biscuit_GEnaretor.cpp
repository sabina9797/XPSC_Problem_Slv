#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int a,b,t;
   cin>> a >> b >>t;
   int produce =t /a;
   int r = produce*b; 
   //cout<<  (t * b)/a<<endl;
   cout<<r<<'\n';

 
  return 0;
}
 

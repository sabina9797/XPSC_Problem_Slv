#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int a,b;
   cin>> a>> b;
   int x= a+(a-1) ;
   int y=b+(b-1);
   int mx = max({x,y,a+b});
   cout<<mx<<endl;

 
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ; 
   int t;
   cin >>t;
   while(t--)  
   {
    long long l,r;
    cin >> l >> r;
    if(l*2<=r)
    {
        cout <<l<<" "<<l*2<<endl;
    }else{
        cout <<"-1" <<" "<<-1<<endl;
    }
   }
 
  return 0;
}
 

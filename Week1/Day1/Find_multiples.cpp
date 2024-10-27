#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int a,b,c;
   cin>> a >> b>>c;
   int st = min(a,b);
   int ed= max(a,b);
   bool f= false;
  
    for(int i=st; i<=ed; i++)
    {
        if(i%c == 0){
            cout<<i;
            f=true;
            break;
        }
    }
    if(!f)
    {
        cout<<"-1\n";
    }
  return 0;
   }
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
    int x,y;
    cin >> x >> y;
    //int a = x*3+y;
    int d = -1;
    for(int i=0; i<3; i++)
    {
        if((x-i)%3  == 0 && (y-i)%3 ==0)
        {
            d = i;
            break;
        }
    }
    cout<<d<<endl;

   }
  return 0;
}
 

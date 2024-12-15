#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;   
   int  t;
   cin >> t;
   while(t--)
   {
        int n,m;
        cin >> n >> m;
        
        if(n>=m && (n%2==m%2))
        {
            cout<<"YES" <<endl;
        }else{
            cout<<"NO" <<endl;
        }
   }
 
  return 0;
}
 

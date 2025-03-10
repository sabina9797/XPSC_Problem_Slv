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
        string ss;
        cin >> ss;
        int cntA=0,cntB=0;
        for(int i=0; i<5; i++)
        {
            if(ss[i]=='A')
            {
                cntA++;
            }else{
                cntB++;
            }
        }
        if(cntA>cntB)
        {
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
   }
 
  return 0;
}
 

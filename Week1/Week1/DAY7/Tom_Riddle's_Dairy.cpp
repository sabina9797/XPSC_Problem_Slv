#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ; 
    int t;
    cin >> t;
     map<string,int>mp;
    while(t--)
    {
        
        string name;
        cin >> name;

        if(mp[name] == 0)
        {
         cout<<"NO"<<'\n';
        }else{
          cout<<"YES"<<'\n';
           
        }
        mp[name]++;
       
            
        
        
    }


 
  return 0;
}
 

#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;   
    int n;
    cin >> n;
    map<string ,int >mp;
    string ss;
    while(n--)
    {
      
    cin >> ss;
    mp[ss] ++;

    
    if(mp[ss] == 1)
    {
        cout<<"OK"<<'\n';
    }else
    {
        cout<<ss;
        cout<<mp[ss]-1<<'\n';
    }
    }
    
  return 0;
}
 

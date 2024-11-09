#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ; 
   int n,m;
   cin >> n >>m;
   map<string ,string>mp;
   for(int i=0; i<n; i++)  
   {
    string s,ip;
    cin >> s >> ip;
    mp[ip] = s;
   }
   for(int i=0; i<m; i++)  
   {
    string s,ip;
    cin >> s >> ip;
    ip.pop_back();
    cout<<s<<" "<<ip<<"; ";
   // ip.pop_back();
    cout<<"#"<<mp[ip]<<endl;
   }
 
  return 0;
}
 


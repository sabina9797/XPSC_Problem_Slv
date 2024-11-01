
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int n;
   cin>>n;
   string s,c;
   set<pair<string,string>>st;
   for(int i=0; i<n; i++)
   {
   cin>> s >> c;
  
st.insert({s,c});

   }
   cout<<st.size()<<endl;
   

 
  return 0;
}
 



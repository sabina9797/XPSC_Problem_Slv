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
        int n,de;
        cin >>n;
        string ss;
        cin >>ss;
        string ans = "";
       
            for(int i=n-1; i>=0; i--)
            {
                if(ss[i] == '0') 
                {
                     de = (ss[i-2]-'0')*10 +(ss[i-1]-'0');
                    char c = de-1 +'a';
                    ans +=c;
                    i =i-2;
                }   else{
                     de = ss[i] -'0';
                     char c = de-1 +'a';
                    ans +=c;
                    //i =i-2;
                } 
            }
    
    for(auto it = ans.rbegin(); it!=ans.rend(); it++)
    {
        cout <<*it;
    }
    cout<<'\n';
            
        
   } 
 
  return 0;
}
 

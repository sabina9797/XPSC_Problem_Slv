#include <bits/stdc++.h>

using namespace std;
int main()
{
   
      int n;
        cin >> n;
        
            vector<string>v(n);
            map<string,int>mp;

    for(int i=0; i<n; i++)
    {
           string ss;
           cin >> ss;
           v.push_back(ss);
           mp[ss]++;
    }

     for(int i = v.size()-1; i>=0; i-- )
     {
            string sss = v[i];

            if(mp[v[i]] >0)
            {
                cout << sss[sss.size()-2] << sss[sss.size()-1];
                mp[sss] =0;
            }
     }
  
        
    

     
    
    return 0;
}

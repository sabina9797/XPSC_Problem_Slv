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
        string s;
        cin >> s;
       int  n = s.size();
        bool f = true;
        vector<char>v;
        for(int  i=0; i<n-1; i++)
        {
            v.push_back(s[i]);
            if(s[i +1] == s[i] &&f)
            { f= false;
            if(s[i] =='a')
            {
                if(s[i +1]!='b')
                {
                    v.push_back('b');
                }else{
                    v.push_back('c');
                }

            }else{
                if(s[i+1] !='a'){
                    v.push_back('a');
                }else{
                    v.push_back('b');
                }
            }

            }

        }
        v.push_back(s[n-1]);
        if(f)
        {
            if(s[n-1] == 'a')
            v.push_back('b');
            else
            v.push_back('a');
        }
        for(char ch : v)
        {
            cout<<ch;
        }
        cout<<'\n';
   }
 
  return 0;
}
 

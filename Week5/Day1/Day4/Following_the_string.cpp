#include<bits/stdc++.h>
using namespace std;

     
    void solve()
    {
         int n;
         cin >>n;
         vector<long long>a(n);
         for(int i=0; i<n; i++)
         {
            cin >> a[i];
         }
         map<char,long long>mp;
         char ch = 'a';
         string ss (n,' ');
         for(int i=0; i<n; i++)
         {
            if(a[i] == 0)
            {
                ss[i] = ch;
                mp[ch] = i;
               ch++;
               if(ch > 'z')
               {
                ch = 'a';
               }

            }else{
                for(auto&k : mp)
                {
                    if(k.second == i - a[i])
                    {
                        ss[i] = k.first;
                        mp[k.first] =i;
                        break;
                    }
                }
            }
         }

    cout << ss << endl;
    }



    int main()
    {
        //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ; 
        int t;
        cin >>t;
        while(t--)
        {
            solve();
        }
    
    }


 


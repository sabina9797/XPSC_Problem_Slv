#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        
       char c;
         string  ss;
        cin >> n ;
        cin >> c;
        cin >> ss;
        ss +=ss;

    int r = 0;
    int pos =-1;
    for(int i=ss.size()-1; i>=0; i--)
    {
        if(ss[i] == 'g')
        {
            pos =i;
        }if(ss[i] == c)
        {
             r = max(r,pos-i);
        }
    }
      
    cout << r << '\n' ;
         

    }
    

    return 0;
}


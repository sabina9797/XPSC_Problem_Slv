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
        /* code */
        int n;
        cin >> n;
        string ss;
        cin >> ss;
        int p = -1;
        int s = -1, pos = 0;
        for (int  i = 0; i < ss.size(); i++)
        {

            

            if (ss[i] == 'p' && p == -1)
            {
                p = pos;
               // pos++;
            }
            if (ss[i] == 's')
            {
                s = pos;
               // pos++;
            }
           pos++;
        }
        if(s==-1 ||p==-1)
        {
            cout<<"YES"<<'\n';
        } else if(p==n-1 || s==0)
        {
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }

    return 0;
}

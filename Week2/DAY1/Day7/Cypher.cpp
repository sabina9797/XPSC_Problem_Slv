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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            int cnt;
            string m;
            cin >> cnt >> m;
            for(int k =0; k<m.size();k++ )
            {
               if(m[k] == 'D')
               {
                    a[j] =  a[j] + 1;
                    if(a[j]==10)
                    {
                        a[j] = 0;
                    }
                    

               }
             else  if(m[k] == 'U')
               {
                    a[j] =  a[j] - 1;
                    if(a[j] == -1)
                    {
                        a[j] = 9;
                    }
                   

               }
            }
            
        }
    for (int i = 0; i < n; i++)
        {
            cout<<a[i] << " ";
        }
        cout<<endl;

    }
        return 0;
    }

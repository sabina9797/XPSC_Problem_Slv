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
        string a, b;
        cin >> a >> b;
        char la = a.back();
        char lb = b.back();
        if(la==lb)
        {
        if (la == 'M')
        {
            cout<<"=" <<'\n';
        }else if(la == 'S')
        {
            if(a.size() > b.size())
            {
                cout << "<" <<endl;
            }else if(a.size() < b.size())
            {
                cout << ">" <<endl;
            }else{
                cout<<"="<<'\n';
            }

        }else if(la == 'L')
        {
            if(a.size() > b.size()){
                 cout << ">" <<endl;
            }else if(a.size() < b.size()){
                 cout << "<" <<endl;
            }else{
                cout<<"="<<'\n';
            }
        }
        }
        else{
            if( (la == 'S') ||(la == 'M' && lb == 'L'))
            {
                cout << "<" << '\n';
            }else{
               cout << ">" << '\n'; 
            }
        }
    }

    return 0;
}

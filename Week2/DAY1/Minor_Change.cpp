#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string t;
    cin >> t;
    vector<char> v1;
    vector<char> v2;
    for(char ch : s)
    {
        v1.push_back(ch);
    }
     for(char ch : t)
    {
        v2.push_back(ch);
    }
    int cnt =0;
    for(int i=0; i<t.size() ; i++)
    {
        if(v1[i] != v2[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}

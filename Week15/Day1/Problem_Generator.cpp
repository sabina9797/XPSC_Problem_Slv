#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>> n >>m;
        string s;cin>>s;
        vector<int>freq(7,0);
        for(char ch: s)
        {
            freq[ch-'A']++;
        }
        int req=0;
        for(int i=0;i<7; i++)
        {
            if(freq[i]<m)
            {
                req+=(m-freq[i]);
            }
        }
        cout<<req<<endl;
    }

    return 0;
}
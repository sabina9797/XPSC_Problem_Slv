#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    double totalpoint = x * 1 + y * 0.5;
    double oponent = y*0.5 + z*1;
    double rem = 4 - (x + y + z);
    double score = totalpoint+rem;
    if (score >oponent)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    // cout << totalpoint;

    return 0;
}

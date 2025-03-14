#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<string> a;
    unordered_map<string, list<string>::iterator>p;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (p.count(s)) {
            a.erase(p[s]);  
        }
        a.push_front(s);  
        p[s] = a.begin();  
    }

    for (const auto& i : a) {
        cout << i[i.size() - 2] << i[i.size() - 1];
    }
    cout << endl;

    return 0;
}

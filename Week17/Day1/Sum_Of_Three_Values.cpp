#include <bits/stdc++.h>
using namespace std;

void solve(int n, int x) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = {arr[i], i};
    }
    
    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        int target = x - v[i].first;
        
        while (left < right) {
            int curr = v[left].first + v[right].first;
            
            if (curr == target) {
                cout << v[i].second + 1 << " "
                     << v[left].second + 1 << " "
                     << v[right].second + 1 << endl;
                return;
            } else if (curr < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    cout << "IMPOSSIBLE" << '\n';
}

int main() {
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n >> x;
    solve(n, x);
    
    return 0;
}

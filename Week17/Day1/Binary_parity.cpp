#include <bits/stdc++.h>
using namespace std;
string binaryParity(int N) {
    int count = 0;
    while (N > 0) {
        count += N % 2;
        N /= 2;
    }
    
    if (count % 2 == 0) {
        return "EVEN";
    } else {
        return "ODD";
    }
}

int main() {
    
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;   
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << binaryParity(N) << "\n";
    }
    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long n,fact=1;
	    cin >> n;
	    for(int i=1; i<=n; i++)
	    {
	        fact = ( 1LL * fact% MOD * i % MOD)%MOD;
	    }
	    cout<< fact <<endl;
	}

}


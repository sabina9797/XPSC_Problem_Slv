//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
        int l=0,r=0,count =0;
        int k1 = pat.size();
        int k2 = txt.size();
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
       
        for(char ch : pat)
        {
            freq1[ch - 'a']++;
        }
        //if(length2>)
        while(r<k2)
        {
            //for(char ch : pat)
        //{
            freq2[txt[r] - 'a']++;
       // }
       if(r-l+1 == k1)
       {
            bool f = true;
            for(int i=0; i<26; i++)
            {
                if(freq1[i] !=freq2[i])
                {
                    f = false;
                    break;
                }
            }
            if(f)
            {
                count++;
            }
            freq2[txt[l] - 'a']--;
            l++;
       }
       r++;
        }
        return count;



	    // code here
	}

};
       
 

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
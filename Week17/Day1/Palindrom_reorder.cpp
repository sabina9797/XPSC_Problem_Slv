#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    cin >> ss;

    int freq[26] = {0};

    for (char ch : ss)
        freq[ch - 'A']++;

    char odd_char = 0;
    int odd_count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 1)
        {
            odd_count++;
            odd_char = 'A' + i;
        }
    }

    if (odd_count > 1)
    {
        cout <<"NO SOLUTION"<< endl;
        return 0;
    }

    char result[ss.size() + 1];
    int left = 0, right = ss.size() - 1;

    for (int i = 0; i < 26; i++)
    {
        while (freq[i] > 1)
        {
            result[left++] = result[right--] = 'A' + i;
            freq[i] -= 2;
        }
    }
    if (odd_count == 1)
    {
        result[left] = odd_char;
    }

    result[ss.size()] = '\0';
    cout << result << endl;

    return 0;
}

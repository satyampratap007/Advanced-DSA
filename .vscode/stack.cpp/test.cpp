#include <bits/stdc++.h> 
using namespace std;

string compressTheString(string &s)
{
    string ans = "";
    int len = s.size();
    int i = 0;
    int j = 0;

    for (; j < len; ++j)
    {
        if (s[i] != s[j])
        {
            ans.push_back(s[i]);
            if ((j - i) > 1)
            {
                ans += to_string(j-i);
            }
            i = j;
        }
    }

    if (i < j)
    {
        ans.push_back(s[i]);
        ans.push_back(char(j - i + '0'));
    }

    return ans;
}

int main() {
    
    string input;
    int t;  cin >> t;
    while(t--)
   {
       cin >> input;
        string compressed = compressTheString(input);
        cout << compressed << endl;
   }
    return 0;
}

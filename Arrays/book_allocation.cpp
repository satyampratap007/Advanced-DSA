// #include <iostream>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     int p = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j{1}; j <= 2*i; ++j)
//         {
//             cout << p;
//         }
//         cout << "\n";
        
//         /* code */
//     }
    

// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     unordered_map<char,int> mp;

//     for(int i=s.size()-1; i >=0; --i)
//     {
//         if(mp.find(s[i]) != mp.end())
//         {
//             s[i] = mp[s[i]];
//             mp[s[i]]++;     
//         }
//         else
//         {
//             mp[s[i]]++;     
//             s[i] = '0';
//         }   
//     }
//     for(auto i : mp)
//         cout << i.first << "-> "<< i.second << " ";
//     // for(int i{0}; i < s.size(); ++i)
//     //     cout << s[i]  << " " ;
// }

#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int,int> mp;
    for(int i{0}; i < 2;++i)
    {
    // cout << mp[2] << "\n";
        mp[2]++;
    }
    mp[2]--;
    mp[2]--;
    cout << mp[2];

}
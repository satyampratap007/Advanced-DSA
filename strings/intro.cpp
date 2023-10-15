// Print frequencies of character in strings in sorted order
// #include <iostream>
// using namespace std;

// void print_string(string &str) 
// {
//     int count[26] = {0};
//     for(int i{0}; i < str.size(); ++i){
//         count[str[i] - 'a']++;
//     }

//     for(int i{0}; i < 26; ++i)
//     {
//         if(count[i] > 0)
//             cout << char(i+'a') << " -> " <<  count[i] << endl;
//     }
// }

// int main(){

//     string str;
//     cin >> str;

//     print_string(str);
// }



// C style string

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main(){

//     // char str[] = "gfg";
//     char str[] = {'g','f','g','h','\n'};

//     cout << sizeof(str);
//     cout << strlen(str);
//     // cout << str;



// }


// #include <bits/stdc++.h>
// using namespace std;

// int helper_sum(int num)
// {
//     vector <int> arr;
//     while (num)
//     {
//         int digit = num % 10;
//         arr.push_back(digit);
//         num /= 10;
//     }
//     int low = 0, high = arr.size()-1;
//     int sum{0};
//     while(low <= high)
//     {
//         if(low == high)
//         {
//             return sum += arr[low];
//         }
//         int num =(arr[low]+arr[high]*10);
//         cout << num << "\n";
//         sum += num;
//         low++;
//         high--;

//     }
//     return sum;
// }

// int main(){
//     int num;    cin >> num;

//     cout << helper_sum(num);

// }

// #include <bits/stdc++.h> 
// using namespace std; 

// void reverse(char str[],int low, int high){
//     while(low<=high){
//         swap(str[low],str[high]);
//         low++;
//         high--;
//     }
// }

// void reverseWords(char str[],int n){
//     int start=0;
//     for(int end=0;end<n;end++){
//         if(str[end]==' '){
//             reverse(str,start,end-1);
//             start=end+1;
//         }
//     }
//     // reverse(str,start,n-1);
//     // reverse(str,0,n-1);
// }
 
// int main() 
// { 
//     string s = "   Welcome";int n=s.length();char str[n];
//     strcpy(str, s.c_str());
//     cout<<"After reversing words in the string:"<<endl;
//     reverseWords(str,n);
//     for (int i = 0; i < n; i++) 
//         cout << str[i];
    
//     return 0; 
// }

// #include <iostream>
// using namespace std;

// int sum_multiple(int n)
// {
//     int sum{0};
//     for(int i{3}; i < n; ++i)
//     {
//         if(!(i%3) || !(i%5))
//         {
//             sum += i;
//         }
//     }
//     return sum;
// }


// int main(){
//     int t;  cin >> t;

//     while(t--)
//     {
//         int n;  cin >> n;
//         cout << sum_multiple(n);
//     }

// }

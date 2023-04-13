#include <iostream>
using namespace std;

bool pall(string &str, int i)
{
    if (i >= str.size()/2)
    {
        return true;
    }
    if (str[i] != str[str.size()-i-1])
    {
        return false;
    }
    return pall(str,i+1);    
           
}

int main(){

    string str;
    cin >> str;

    cout << boolalpha << pall(str,0);
}
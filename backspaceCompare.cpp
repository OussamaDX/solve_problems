#include <iostream>
#include <string>
using namespace std;

bool backspaceCompare(string s, string t)
{
    int i = 0;
    string res = "";
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            res += s[i];
        else if (!res.empty())
        {
            res.pop_back();
        }
        i++;
    }
    int j = 0;
    string ret = "";
    while (t[j])
    {
        if (t[j] >= 'a' && t[j] <= 'z')
            ret += t[j];
        else if (!ret.empty())
        {
            ret.pop_back();
        }
        j++;
    }
    if (res.compare(ret) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    bool a = backspaceCompare("a#c","b");
    if (a == true)
        cout << "yess" << endl;
    else
        cout << "no" << endl;
}
/*
Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
*/
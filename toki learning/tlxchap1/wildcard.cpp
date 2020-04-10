#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str[101], filteredStr[101];
    int n, x = 0;
    string wildchar;
    cin >> wildchar >> n;
    int pos = wildchar.find('*');

    string substr1 = wildchar.substr(0, pos);
    string substr2 = wildchar.substr(pos + 1, wildchar.length());

    for (int i = 0; i < n; i++)
    {
        bool status = true;
        cin >> str[i];
        string st = str[i];
        for (int j = 0; j < substr1.length(); j++)
        {
            if (substr1[j] != str[i][0])
            {
                status = false;
                break;
            }
            str[i].erase(0,1);
        }
        int len = str[i].length();
        for (int j = substr2.length() - 1; j >= 0; j--)
        {
            len--;
            if (substr2[j] != str[i][len])
            {
                status = false;
                break;
            }
        }
        if (status)
        {
            filteredStr[x++] = st;
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout << filteredStr[i] << endl;
    }
}
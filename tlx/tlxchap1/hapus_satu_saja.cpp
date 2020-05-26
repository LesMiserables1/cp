#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st1, st2;
    int x = 0;
    int i;
    cin >> st1;
    cin >> st2;

    for (i = 0; i < st1.length(); i++)
    {
        if (st1[i] == st2[x])
        {
            x++;
        }
    }
    if (i - x == 1)
    {
        cout << "Tentu saja bisa!" << endl;
    }
    else
    {
        cout << x;
        cout << "Wah, tidak bisa :(" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define loop(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair

int main()
{
    string st, cip = "";
    int n;

    getline(cin, st);
    cin >> n;

    int hasilMod = abs(n) % 26;
    loop(i, 0, st.length())
    {
        if ((st[i] >= 97 && st[i] <= 122)  || (st[i] >= 65 && st[i] <= 90) ){
            int hasilOrd;
            int c = st[i];
            if(n >= 0){
                int ord = c <= 90 ? 90:122;
                hasilOrd = (c + hasilMod) <= ord ? (c + hasilMod) : (c+hasilMod) - 26;
            }else if(n < 0){
                int ord = c <= 90 ? 65:97;
                hasilOrd = (c-hasilMod) < ord ? (c-hasilMod) + 26 : (c-hasilMod);
            }
            char c1 = hasilOrd;
            cip += c1;
        }
        else
            cip += st[i];
    }
    cout << cip << endl;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

int main()
{
    int n = 3;
    for (int b = 0; b < (1 << n); b++)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (b & (1 << i))
                v.push_back(i + 1);
        }
        for(auto i : v){
            cout << i;
        }
        cout << "\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define loop(i, a, n) for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x << '\n'
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    ll arr[100001];
    bool stat = 0;
    vector<ll> neg;
    ll sumprev,min1,min2 = INT32_MAX;
    rep(i, n)
    {
        sumprev = sum;
        cin >> arr[i];
        sum += arr[i];
        if(i==0) min1 = arr[0];
        if (sumprev > sum)
            min1 = arr[i];
        if(min2 > arr[i])
            min2 = arr[i];
    }
    ll p = 0, s = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] == min1)
            {
                s = 0;
                continue;
            }
            s = max(arr[k], s + arr[k]);
            p = max(p, s);
        }
    ll p2 = 0, s2 = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] == min2)
            {
                s2 = 0;
                continue;
            }
            s2 = max(arr[k], s2 + arr[k]);
            p2 = max(p2, s2);
        }
    p = max(p,p2);
    sum > p ? cout << "YES" : cout << "NO";
    cout << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
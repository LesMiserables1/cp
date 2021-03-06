#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define loop(i, a, n) for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x << '\n'
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll dp[51] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n / 2; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            dp[i] += dp[j] * dp[i - 1 - j];
        }
    }
    cout << dp[n / 2] << endl;
}
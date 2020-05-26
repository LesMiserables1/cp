#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

const int N = 1e+3;
int dp[N+1];

void compute(){
    for(int i = 0; i <= 10; ++i) dp[i] = i;
    for(int i = 11; i <= N; ++i){
        int x =  dp[i/2] + dp[i/3] + dp[i/4];
        dp[i] = max(dp[x],max(i,x));
    }
}

int main(){
    int n;
    cin >> n;
    compute();
    cout << dp[n] << '\n';
    return 0;
}
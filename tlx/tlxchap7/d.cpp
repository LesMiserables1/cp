#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        string st;
        cin >> st;
        int dp[1001][1001] = {0};
        for(int i = 1; i <= st.length(); ++i){
            for(int j = 0; j <= st.length()-i; ++j){
                if(i == 1){
                    dp[i][j] = 1;
                }else{
                    if(st[j] == st[j+i-1]){
                        dp[i][j] = 2 + dp[i-2][j+1];
                    }else
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j+1]);
                }
            }
        }
        cout << dp[st.length()][0] << '\n';
    }
}
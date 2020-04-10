#include<bits/stdc++.h>

using namespace std;
#define deb(x) cout << #x << " = " << x <<'\n'

const int N = 1e+5;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n,k;
    cin >> n >> k;
    
    vector<pair<int,int>> arr(1);
    arr[0] = {0,0};
    for(int i = 0; i < k; ++i){
        int v,w;
        cin >> w >> v;
        arr.push_back({w,v});
    }
    // int dp[2001];    
    // dp[0] = 0;
    // for(int i = 1;i < n;i++){
    //     for(int j = 0; j < k;j++){
    //         if(i-arr[j] >= 0){
    //             // dp[i] = max(dp[i-j]+arr[i],max(dp[i],dp[i-1]));
    //             dp[i] = max(dp)
    //         }else{
    //             dp[i] = dp[i-j];
    //         }
    //     }
    // }
    // printf("%d\n",dp[n]);
    int dp[2001][201];
    vector<vector<int>> rs[201];
    for(int i = 0; i <= k; ++i){
        for(int j = 0; j <= n; ++j){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else if(j >= arr[i].first){
                dp[i][j] = max(arr[i].second + dp[i-1][j - arr[i].first],dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[k][n] << endl;
    sort(rs[k][n].begin(),rs[k][n].end());
    for(int& i : rs[k][n]){
        if(i == 0) continue;
        cout << i << endl;
    }
    for(int i = rs[k][n].size()-1; i >=0 ; i--){
        if(rs[k][n][i] == 0) continue;
        cout << rs[k][n][i] << endl;
    }
}
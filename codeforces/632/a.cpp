#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int T; cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        // string st[1001];
        for(int i = 0;i < n; i++){
            for(int j = 0; j < m; j++){
                i == 0  && j == 0 ? cout << "W" : cout << "B";
            }
            cout << '\n';
        }
        // int N, M; cin >> N >> M;
		// for (int i = 0; i < N; i++) {
		// 	for (int j = 0; j < M; j++) {
		// 		cout << "BW"[i==0 && j == 0];
        //         // cout << i << j;
        //         // cout << "BW"[1];
		// 	}
		// 	// cout << '\n';
		// }
    }
}
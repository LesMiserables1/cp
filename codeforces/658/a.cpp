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
        int n,m;
        cin >> n >> m;
        // int occur[1001];
        vector<int> occur(1001,0);
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if(occur[x]==0)
            occur[x]++;
        }
        bool status = 0;
        int rslt;
        for(int i = 0; i < m; ++i){
            int x;
            cin >> x;
            if(occur[x]>0){
                status = 1;
                rslt = x;
            }
        }
        if(status){
            cout << "YES\n";
            cout << 1 << " " << rslt << endl;
        }else{
            cout << "NO\n";
        }
    }
}
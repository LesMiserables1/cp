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
        int rem_row = n;
        int rem_col = m;
        for(int i = 0; i < n; ++i){
            bool flag = 0;
            for(int j = 0; j < m; ++j){
                int x;
                cin >> x;
                if(x && !flag){
                    rem_col--;
                    flag = 1;
                }
            }
            if(flag) rem_row--;
        }
        int rem_cel = min(n,m);
        if(rem_cel%2) cout << "Ashish\n";
        else cout << "Vivek\n";

    }
}
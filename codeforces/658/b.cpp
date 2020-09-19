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
        int n;
        cin >> n;
        int win = -1;
        bool flag = 0;
        for(int i = 0; i < n; ++i){
            ll x; cin >> x;
            if(x == 1 && !flag){
                win *= -1;
            }else{
                if(!flag){
                    win *= -1;
                    flag = 1;   
                }
            }
        }
        if(win == 1){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }
}
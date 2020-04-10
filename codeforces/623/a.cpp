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
        ll a,b;
        cin >> a >> b;
        if(abs(a-b) > 0){
            if(abs(a-b)%2 == 0){
                if(a > b){
                    cout << 1;
                }else
                    cout << 2;
            }else{
                if(a < b) cout << 1;
                else cout << 2;
            }
        }else
            cout << 0;
        cout << endl;
    }
}
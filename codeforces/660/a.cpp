#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        if(n > 30){
            cout << "YES\n";
            // n -= 16;
            cout << 6 << " " << 10 << " ";
            if(n == 36){
                cout << 15 << " " << 5;
            }else if(n == 40){
                cout << 21 << " " << 3;
            }else if(n == 44){
                cout << 21 << " " << 7;
            }else
            cout << n - 30 << " " << 14;
            cout << endl;
        }else{
            cout << "NO\n";
        }
    }
}
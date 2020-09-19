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
        int n,k;
        cin >> n >> k;
        if((n+k) % 2 == 0){
            if(n < k){
                cout << k-n;
            }else{
                cout << 0;
            }
        }else{
            if(n < k ){
                cout << k-n;
            }else{
                cout << 1;
            }
        }
        cout << endl; 
    }
}
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
        int a[3];
        int b[3];

        int count = 0;
        for(int i = 0; i < 3; ++i){
            cin >> a[i];
            count += a[i];
        }
        for(int i = 0; i < 3; ++i){
            cin >> b[i];
        }
        int x = 2;
        int y = 1;
        int rs = 0;
        while(count > 0){
            int subs = min(a[x],b[y]);
            a[x] -= subs;
            b[y] -= subs;
            count -= 2*subs;

            if(x > y){
                rs += subs*(x*y);
            }else if(x == y){
                rs += 0;
            }else{
                rs -= subs*(x*y);
            }

            if(a[x] > 0){
                y--;
                if(y < 0) y = 2;
            }else if(b[x] > 0){ 
                x--;
            }else{
                x--;
                y--;
                if(y < 0) y = 2;

            }
        }
        cout << rs << endl;
    }
}
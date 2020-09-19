#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

const int N = 2e5+1;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n,k;
        cin >> n >> k;
        
        ll a[N];
        int w[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < k; ++i){
            cin >> w[i];
        }
        sort(a,a+n);
        sort(w,w+k);

        int back;
        int front = n-1;
        ll rs = 0;
        for(int i = 0; i < k; ++i){
            if(w[i] == 1){
                rs += a[front]* 2;
                front--;
            }else {
                back = front-w[i];
                rs += a[front] + a[back];
                front--;
            }
        }
        cout << rs << endl;
    }
}
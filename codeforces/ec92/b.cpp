#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

const int N = 1e5+3;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n,k,z;
        cin >> n >> k >> z;
        int a[N];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int max_doub_sum = 0;
        int max_index = 0;
        for(int i = 0; i < n-1 && i < k;++i){
            int doub_sum = a[i] + a[i+1];
            if(max_doub_sum <= doub_sum){
                max_index = i+1;
                max_doub_sum = doub_sum;
                // deb(max_doub_sum);
            }
        }
        int x = 0;
        int result = a[x];
        x++;
        while(k > 0){
            result += a[x];
            k--;
            if(x == max_index && z > 0){
                z--;
                x--;
            }else
            x++;

        }
        cout << result << endl;
    }
}
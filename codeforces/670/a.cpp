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
        int occur[101] = {0};
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            occur[x]++;
        }
        int max_sum = 0;
        bool flag = 1;
        for(int i = 0; i < 101; ++i){
            if(occur[i] == 0){
                break;
            }else if(occur[i] == 1){
                max_sum++;
                flag = 0;
            }else{
                if(flag)
                max_sum += 2;
                else max_sum++;
            }
        }
        cout << max_sum << endl;
    }
}
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
        int flag_0 = 0,flag_1 = 0;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if(x == 0){
                flag_0++;
            }else{
                flag_1++;
            }
        }
        if(flag_0 >= flag_1){
            cout << max(1,flag_0 - (flag_0%2)) << endl;
            for(int i = 0; i < max(1,flag_0 - flag_0%2); ++i ){
                cout << 0 << " ";
            }
            cout << endl;
        }else{
            cout << flag_1 - (flag_1%2) << endl;
            for(int i = 0; i < flag_1 - flag_1%2; ++i ){
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
}
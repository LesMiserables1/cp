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
        
        ll num[4];
        ll max_num = 1;
        ll min_num = INT64_MAX;
        int count_max = 1;
        for(int i = 0; i < 3; ++i){
            cin >> num[i];
            if(max_num < num[i]){
                max_num = num[i];
            }else if(max_num == num[i]){
                count_max++;
            }
            if(min_num > num[i]){
                min_num = num[i];
            }
        }
        
        if(count_max >= 2){
            cout << "YES\n";
            cout << min_num << " ";
            cout << min_num << " " << max_num << endl;
        }else{
            cout << "NO\n";
        }

    }
}
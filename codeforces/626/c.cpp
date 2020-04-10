#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    int hsl = 0;
    int open = 0;
    int right = 0;
    if(n%2 == 0){
        rep(i,n){
            if(st[i] == ')'){
                // if(open == 0)
                // right++;
                // else if(open > 0){
                //     open--;
                // }
                right++;
            }
            if(right > 0 && st[i] == '('){
                hsl++:
                right--;
            }
            // if(st[i] == '('){
            //     if(right > 0){
            //         hsl++;
            //         right--;
            //     }else{
            //         open++;
            //     }
            // }
        }
    }
    hsl == 0 || right != 0 ? cout << -1 << endl :cout << hsl * 2 << endl;
}
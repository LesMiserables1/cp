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
        vector<int> num;

        int prod = 1;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if(n == 5){
                prod *= x;
            }
            num.pb(x);
        }
        if(n == 5){
            cout << prod << endl;
            continue;
        }
        sort(num.begin(),num.end());

        int point_left = 0;
        int point_right = n-1;
        int counting = 0;
        while(counting < 5){
            int prod_left = num[point_left] * num[point_left+1];
            if(prod_left >= num[point_right] && counting < 4){
                prod *= prod_left;
                point_left += 2;
                counting += 2;
            }else{
                prod *= num[point_right];
                point_right--;
                counting++;
            }
        }
        cout << prod << endl;
    }
}
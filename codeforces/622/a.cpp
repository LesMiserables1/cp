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
        int a[4];
        int hsl = 0;
        cin >> a[0] >> a[1] >> a[2];
        rep(i,2){
            int temp = 0;
            int pb1 = 3;
            rep(j,3){
                if(i == 1){
                    if(a[j] >= 1){
                        if(a[j] >= 2){
                            a[j] -= 2;
                            temp += 2;
                        } 
                        else{
                            a[j]--;
                            temp ++;
                        } 
                    }else{
                        pb1 -= 2;
                    }
                }else{
                if(a[j] >= 1){
                    a[j] -= (i+1);
                    temp ++;
                }else{
                    temp += a[j]%(i+1);
                    a[j] = 0;
                }
                }
            }
            if(i==1){
                pb1 = max(pb1,0);
                hsl += min(pb1,temp/(i+1));
            }else hsl += temp/(i+1);
        }
        if(a[0] > 0 && a[1]>0 && a[2]>0) hsl++;
        cout << hsl << endl;
    }
}
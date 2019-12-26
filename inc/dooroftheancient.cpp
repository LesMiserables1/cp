#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define loop(i,a,b) for(int i = a;i < b; i++)
#define mp make_pair

const int N = 1e+9;
int d[N][100];
int n,m;
int hasil(int bil1,int bil2){
    if(!d[bil1][bil2]){
        int x = m;
        int y = bil2;
        int pow = 0;
        int loss = 0;
        while(y > 0){
            pow += bil1;
            x -= pow;
            y /= 2;
            if(x <= 0){
                d[bil1][bil2] = bil2-y;
            }else if(x > 0){
                if(d[bil1][y])
                    d[bil1][bil2] = bil2-y+d[bil1][y];
            }
        }
    }
    return d[bil1][bil2];
}
int main(){
    vector < pair<int,int> > power;

    cin >> n >> m;
    loop(i,0,n){
        int bil1,bil2;
        cin >> bil1 >> bil2;
        power.pb(mp(bil1,bil2));
    }
   
}
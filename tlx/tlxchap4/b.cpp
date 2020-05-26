#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

int main(){
    int n;
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    rep(i,n){
        
        vector <int> score;
        bool status = true;
        int x;

        cin >> x;
        int maxwin = (x-1)*x/2;
        rep(j,x){
            int sc;
            cin >> sc;
            score.pb(sc);
        }
        sort(score.begin(),score.end());
        reverse(score.begin(),score.end());
        
        int jumlahMenang = 0,jumlahMenang1 = 0;
        int jumlahKalah = 0,jumlahKalah1 = 0;
        int jumlahSeri = 0,jumlahSeri1 = 0,cnt = 0;

        rep(j,score.size()){
            int seri = 0,menang = 0,kalah = 0;
            menang = score[j]/3;
            seri = score[j] % 3;
            kalah = (x-1) - menang - seri;
            
            jumlahKalah += kalah;
            jumlahMenang += menang;
            jumlahSeri += seri;

            maxwin = maxwin - menang;
            if(kalah < 0 && score[j] != x-1){
                status = false;
                break;
            }
            if(score[j]== x-1){
                menang = 0;
                seri = x-1;
                kalah = 0;
            }
            jumlahKalah1 = jumlahKalah1 + kalah;
            jumlahMenang1 = jumlahMenang1 + menang;
            jumlahSeri1 = jumlahSeri1 + seri;
          
            if(score[j] == x-1){
                cnt++;
            }
        }
        if((maxwin >= 0 && (jumlahKalah == jumlahMenang || jumlahKalah1 == jumlahMenang1) && status && (jumlahSeri%2 == 0 || jumlahSeri1 %2 == 0))){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
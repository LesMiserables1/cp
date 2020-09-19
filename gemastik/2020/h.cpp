#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int N,M;
int mat[10001][10001];
int aux[10001][10001];
void preProcess() 
{ 
   for (int i=1; i<=N; i++) 
      aux[1][i] = mat[1][i]; 
  
   for (int i=2; i<=M; i++) 
      for (int j=1; j<=N; j++) 
         aux[i][j] = mat[i][j] + aux[i-1][j]; 
  
   for (int i=1; i<=M; i++) 
      for (int j=2; j<=N; j++) 
         aux[i][j] += aux[i][j-1]; 
} 
int sumQuery(int tli, int tlj, int rbi, int rbj) 
{ 
    int res = aux[rbi][rbj]; 
  
    if (tli > 1) 
       res = res - aux[tli-1][rbj]; 
  
    if (tlj > 1) 
       res = res - aux[rbi][tlj-1]; 
  
    if (tli > 1 && tlj > 1) 
       res = res + aux[tli-1][tlj-1]; 
  
    return res; 
} 
int main(){
    int q;
    cin >> N >> M >> q;
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= M; ++j){
            cin >> mat[i][j];
        }
    }
    preProcess();

    for(int i = 0; i < q; ++i){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << sumQuery(a,b,c,d) << endl;
    }
}
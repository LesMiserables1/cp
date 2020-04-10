#include<bits/stdc++.h>
using namespace std;

#define pb push_back()
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)

int arr1[75][75];
int arr2[75][75];

bool check_identik(int x,int y,int n){
    if(arr1[x][y] == arr2[x][y]){
        if(x == n || y == n)
            return true;
        if(check_identik(x+1,y,n) && check_identik(x,y+1,n)){
            return true;
        }
    }
    return false;
    
}
bool check_horizontal(int x, int y, int n){
     if(arr1[x][y] == arr2[n-x][y]){
        if(x == n || y == n)
            return true;
        if(check_horizontal(x+1,y,n) && check_horizontal(x,y+1,n)){
            return true;
        }
    }
    return false;
}
bool check_vertikal(int x, int y, int n){
     if(arr1[x][y] == arr2[x][n-y]){
        if(x == n || y == n)
            return true;
        if(check_vertikal(x+1,y,n) && check_vertikal(x,y+1,n)){
            return true;
        }
    }
    return false;
}
bool check_kanan_bawah(int x, int y, int n){
     if(arr1[x][y] == arr2[y][x]){
        if(x == n || y == n)
            return true;
        if(check_kanan_bawah(x+1,y,n) && check_kanan_bawah(x,y+1,n)){
            return true;
        }
    }
    return false;
}
bool check_kiri_atas(int x, int y, int n){
     if(arr1[x][y] == arr2[n-y][n-x]){
        if(x == n || y == n)
            return true;
        if(check_kiri_atas(x+1,y,n) && check_kiri_atas(x,y+1,n)){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    
    cin >> n >> n;
    rep(i,n){
        rep(j,n){
            cin >> arr1[i][j];
        }
    }
    cin >> n >> n;
    rep(i,n){
        rep(j,n){
            cin >> arr2[i][j];
        }
    }
    if(check_identik(0,0,n-1))
        cout << "identik\n";
    else if(check_horizontal(0,0,n-1))
        cout << "horisontal\n";
    else if(check_vertikal(0,0,n-1))
        cout << "vertikal\n";
    else if(check_kanan_bawah(0,0,n-1))
        cout << "diagonal kanan bawah\n";
    else if(check_kiri_atas(0,0,n-1))
        cout << "diagonal kiri bawah\n";
    else
        cout << "tidak identik\n";
    return 0;
}   
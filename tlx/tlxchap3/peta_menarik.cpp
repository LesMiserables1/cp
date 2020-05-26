#include<bits/stdc++.h>
using namespace std;

int sekitar(int row,int col,int (&petak)[101][101],int col_s,int row_s){
    int nilaiS = 1;
    bool check = false;
    if (row_s + 1 <= row){
        nilaiS *= petak[row_s+1][col_s];
        check = true;
    }    
    if (row_s - 1 >= 1){
        nilaiS *= petak[row_s-1][col_s];
        check = true;
    }
    if (col_s - 1 >= 1){
        nilaiS *= petak[row_s][col_s-1];
        check = true;
    }
    if (col_s + 1 <= col){
        nilaiS *= petak[row_s][col_s+1];
        check = true;
    }
    if(check){
        return nilaiS;
    }else{
        return 0;
    }
}
int main(){
    int m,n,nilai;
    int petak[101][101];
    bool check = false;
    scanf("%d %d %d",&m,&n,&nilai);
    for (int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            scanf("%d",&petak[i][j]);
        }
    }
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(sekitar(m,n,petak,i,j) == nilai){
                cout << j << " " << i << endl;
                check = true;
                break;
            }
        }
        if(check){
            break;
        }
    }
    if(!check)   cout<< 0 << " " << 0 << endl;
       
}
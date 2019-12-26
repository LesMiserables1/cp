#include<bits/stdc++.h>
using namespace std;

struct orang
{
    string nama;
    string nomor;
};

string binser(string nama, orang orang[],int l,int r){

    if(r >= l){
        int mid = (l + r) / 2;
        if (orang[mid].nama < nama){
            return binser(nama,orang,mid+1,r);
        }else if (orang[mid].nama > nama){
            return binser(nama,orang,l,mid-1);
        }else if (orang[mid].nama == nama){
            return orang[mid].nomor;
        }
    }
    return "-1";
}

int main(){
    int n,q;
    orang orang[100000];
    string nama;

    scanf("%d %d",&n,&q);
    
    for (int i = 0; i < n; i++)
    {
        cin >> orang[i].nama >> orang[i].nomor;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> nama;
        string nomor = binser(nama,orang,0,n-1);
        if(nomor == "-1") cout << "NIHIL\n";
        else cout << nomor << endl;
    }
    
}

#include<bits/stdc++.h>
using namespace std;

struct mahasiswa
{
    int niu;
    string nama;
    string jurusan;
};
bool acompare(mahasiswa lhs, mahasiswa rhs) { return lhs.niu < rhs.niu; }
bool prodicompare(mahasiswa lhs, mahasiswa rhs) { return lhs.jurusan < rhs.jurusan; }

int main(){
    int cnt = 0,index = 0;
    mahasiswa mhs[1000];
    ifstream openfile;
    string niu,nama,jurusan,kosong;
    openfile.open("prg9.csv");

    if(openfile.is_open()){
        while (openfile.good()){
            cnt++;
            getline(openfile,niu,',');
            getline(openfile,nama,',');
            getline(openfile,jurusan,',');
            mhs[index].niu = stoi(niu);
            mhs[index].nama = nama;
            mhs[index].jurusan = jurusan;
            index++;
        }
    }
    openfile.close();
    ofstream sortprodi("prg9-urut-prodi.txt");
    sort(mhs,mhs+index,prodicompare);
    if(sortprodi.is_open()){
        for(int i = 0; i < index;i++){
            sortprodi << mhs[i].niu << " "
                    << mhs[i].nama << " "
                    << mhs[i].jurusan << "\n";
        }
    }
    ofstream sortniu ("prg9-urut-nim.txt");
    sort(mhs,mhs+index,acompare);
    if(sortniu.is_open()){
        for(int i = 0; i < index;i++){
            sortniu << mhs[i].niu << " "
                    << mhs[i].nama << " "
                    << mhs[i].jurusan << "\n";
        }
    }
    sortniu.close();

    
}
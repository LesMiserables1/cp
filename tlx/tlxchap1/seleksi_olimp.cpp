#include <bits/stdc++.h>
using namespace std;

struct peserta
{
    int nilai[4];
    string nama;
};
int checking(int pos, peserta ps[], int itr, int n, int x)
{
    bool check = false;
    int m = 0;
    int j;
    for (int i = 0; i < n; i++)
    {
        if (ps[x].nama != ps[i].nama)
        {
            if (ps[x].nilai[itr] > ps[i].nilai[itr])
            {
                pos--;
            } 
            else if (ps[x].nilai[itr] == ps[i].nilai[itr])
            {
                ps[m++] = ps[i];
                check = true;
            }
        }
        else
        {
            j = m;
            ps[m++] = ps[i];
        }
    }
    if (check == true)
    {
        itr--;
        pos = checking(pos, ps, itr, m, j);
    }
    return pos;
}
int main()
{
    peserta ps[90];
    int n, j = 0, m;
    int x;
    int itr;
    int pos;
    int posisi;
    string nama;
    cin >> m;
    for (int k = 0; k < m; k++)
    {
        cin >> n;
        cin >> pos;
        cin >> nama;
        for (int i = 0; i < n; i++)
        {
            cin >> ps[i].nama;
            for (int j = 0; j < 3; j++)
            {
                cin >> ps[i].nilai[j];
            }
            if (nama == ps[i].nama)
            {
                x = i;
            }
        }
        posisi = checking(n, ps, 2, n, x);
        if (pos >= posisi)
        {
            cout << "YA" << endl;
        }
        else if (pos < posisi)
        {
            cout << "TIDAK" << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

bool destroy(char (&block)[50][50], int row, int col)
{
    if (block[row][--col] == '1')
    {
        if (col == 0)
        {
            block[row][col] = '0';
            return true;
        }
        if (destroy(block, row, col))
        {
            block[row][col] = '0';
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }

    return true;
}
bool runtuh(char (&block)[50][50], int row, int col)
{
    bool check = false;
    for (int i = 0; i < col; i++)
    {
        int rear = row - 1, front = row , checkedRow = row;
        while (block[++checkedRow][i] == '0')
            front++;
        while (rear >= 0)
        {
            if (block[front][i] == '0')
            {
                if (block[rear][i] == '1')
                {
                    block[front--][i] = '1';
                    block[rear][i] = '0';
                    check = true;
                }
            }else{
                front--;
            }
            rear--;
        }
    }
    return check;
}
int destroy2(char (&block)[50][50], int row, int col){
    int baris=-1;
    for (int i = 0; i < row; i++)
    {
        if(destroy(block,i,col)){
            baris = i;
        }
    }
    return baris;
}
int main()
{
    int row, col;
    bool check;
    char block[50][50];
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> block[i][j];
        }
    }
    int i = destroy2(block,row,col);
    while(i != -1){
        runtuh(block,i,col);
        i = destroy2(block,row,col);
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << block[i][j];
        }
        cout << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono; 

int arr[100000000];
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void select_sort(int arr[],int n){
    int i, j, min_idx;  
  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
        swap(&arr[min_idx], &arr[i]);  
    }  
}
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 

        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
void bubble_sort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)     
      
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
int main(){
    int data;
    cin >> data;
    for (int i = 0; i < data; i++)
    {
        int rands = rand() % 1000000;
        arr[i] = rands;
    }
    sort(arr,arr+data);
    auto time = high_resolution_clock::now();
    binarySearch(arr,0,data-1,arr[0]);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - time ); 
    cout << duration.count()<<endl;
}


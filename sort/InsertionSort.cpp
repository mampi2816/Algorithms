#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){

    for(int i=0; i<n; i++){
        int val = a[i];
        int pos = i;

        while(pos > 0 && a[pos-1] > a[pos]){
            swap(a[pos], a[pos-1]);
            pos--;
        }

        a[pos] = val;       
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
       cin >> a[i]; 
    }

    insertionSort(a, n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r){
    int i = l;
    int j = mid+1;
    int k = 0;
    int b[r-l+1];
    while(i<=mid && j<=r){
        if(a[i] < a[j]){
            b[k] = a[i];
            i++;
        }else{ 
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k] = a[j];
            k++;
            j++;
        }
    }else{
        while(i<=mid){
            b[k] = a[i];
            k++;
            i++;
        }
    }
    for(int v=l, m=0; v<=r, m<r-l+1; v++, m++){
        a[v] = b[m];
    }
}

void mergeSort(int a[], int l, int r){
    int mid=0;
    if(l<r){
        mid = (l+r)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int l = 0;
    int r = n-1;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    mergeSort(a, l, r);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
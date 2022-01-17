#include <iostream>
#include <set>

using namespace std;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l + (r-l)/2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int l1 = 0;
    int r1 = n - 1;
    int l2 = 0;
    int r2 = m - 1;
    mergeSort(a,l1,r1);
    mergeSort(b,l2,r2);
    set<int> s1;
    set<int> s2;
    for(int i=0;i<n;i++){
        s1.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        s2.insert(b[i]);
    }
    if(s1 == s2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    
    
}
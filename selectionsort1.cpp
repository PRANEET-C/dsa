#include <iostream>
using namespace std;

void selectionSort(int ar[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(ar[j]<ar[i]){
                swap(ar[i],ar[j]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
        
    }
    return 0;
}
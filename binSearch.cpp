#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int s=0;int e=size-1;
    int pos=-1;
    while(s<=e){
        int m=s+((e-s)/2);
        if(arr[m]==key){
            pos=m;break;
        }else if(key>arr[m]){
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return pos;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int index=binarySearch(arr,n,k);
    cout<<"The position is "<<index;
    return 0;
}
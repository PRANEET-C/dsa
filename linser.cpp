#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int key){
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int res=linearSearch(arr,n,key);

    if(res!=-1){
        cout<<"The key is found in "<<res<<" index";
    }else{
        cout<<"The key is not found!";
    }

    return 0;
}
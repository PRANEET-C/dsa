#include <iostream>
#include <vector>
using namespace std;

void printRev(int arr[],int size){
    vector<int> temp;
    for(int i=size-1;i>=0;i--){
        temp.push_back(arr[i]);
    }
    for(int i:temp){
        cout<<i;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printRev(arr,n);
    return 0;
}
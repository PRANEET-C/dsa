int firstOcc(vector<int>& arr,int n,int k){
    int start=0;int end=n-1;int pos=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k){
            pos=mid;
            end=mid-1;
        }else if (k>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return pos;
}
int lastOcc(vector<int>& arr,int n,int k){
    int start=0;int end=n-1;int pos=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            pos=mid;
            start=mid+1;
        }else if (k>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return pos;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}

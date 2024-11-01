#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int left, int right,int key){
    while(left<=right){
    int mid = (left + right)/2;
    if(arr[mid]== key){
        return mid;
    }
    else if(arr[mid]<key){
        left=mid + 1;
    }
    else
        right=mid-1;
  }
  return -1;//Element is not found
}
int main(){
    int arr[]= {2,4,6,8,10,14};
    int target = 10;
    int n= sizeof(arr)/sizeof(arr[0]);
    int result= binarySearch(arr, 0, n-1, target);
    if(result!=-1){
        cout<<"Element is found at index "<<result<<endl;
    }
    else
    cout<<"Element is not found "<<endl;
    return 0;
}
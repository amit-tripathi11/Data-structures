#include <iostream>
using namespace std;
void print(int * myArray, int n){
    for(int i=0; i<n; i++){
        cout<<myArray[i]<<' ';
    }
    cout<<endl;
}
///return index if present otherwise -1
int linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
       }
       return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    print(arr,n);
    int key;
    cin>>key;
    int res= linearsearch(arr,n,key);
    if(res==-1){
        cout<<"Element is not found"<<endl;
    }
    else{
        cout<<"Present at index "<<res<<endl;
    }

    return 0;
}
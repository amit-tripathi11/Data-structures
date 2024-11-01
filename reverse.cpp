#include <iostream>
using namespace std;
void reverse(int Array[],int n){
    for(int i=n-1; i>-1; i--){
        cout<<Array[i]<<' ';
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<Array[n-1-i]<<' ';
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
}
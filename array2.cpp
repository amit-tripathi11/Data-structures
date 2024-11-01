#include <iostream>
using namespace std;
void net(){
    int n;
    cin>>n;
    int arr[n];
    cout<<sizeof(arr)/sizeof(int)<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<',';
    }
    cout<<endl;
}
int main(){
    int arr[100];//create
    //User input
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<", "; 
    }
    cout<<endl;
    net();
    return 0;
}
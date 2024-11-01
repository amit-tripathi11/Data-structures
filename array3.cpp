#include <iostream>
using namespace std;
//Passing array to function
void print(int* myArray, int n){
    for(int i=0; i<n; i++){
        cout<<myArray[i]<<',';
    }
    cout<<endl;
    cout<<sizeof(myArray);
    }
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sizeof(arr)<<endl;
    print(arr,n);
    return 0;
}
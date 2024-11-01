#include <iostream>
using namespace std;
//reverse array in place-> changes in the original array
//No new array will be formed
void reverseArrayinPlace(int *arr, int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int s=0; s<3; s++){
        int e=4-s;
        swap(arr[s], arr[e]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
   // reverseArrayinPlace(arr,n);
    return 0;
}
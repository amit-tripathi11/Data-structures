#include <iostream>
using namespace std;
int main(){
    int arr[]={3,5,2,6,9};
    int n= sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    for(int i=0; i<n; i++){  //i starting point of the subarray
        for(int j=i; j<n; j++){  // j ending point 
          //subarray i...j
            for(int k=i; k<=j; k++){ //k = i...j
                cout<<arr[k]<<' ';
             }
                cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
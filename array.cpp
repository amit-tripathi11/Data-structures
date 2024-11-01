#include <iostream>
using namespace std;
int main() {
     int array[50]={1,2,9,45,67};
    cout<<array[4]<<endl;
    cout<<array[9]<<endl;
    // Print all the elements of the array
    int n= sizeof(array)/sizeof(int);
    cout<< n << endl;
    for(int i=0; i<=n-1; i++){
        cout<<array[i]<<",";
    }
    cout<<endl;
    return 0;
    }





























































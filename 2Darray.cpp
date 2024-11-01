#include <iostream>
using namespace std;
void wavePrint(int array[][50], int rows, int cols){
    //iterate on every column
    for(int col=0; col<cols; col++){
        if(col%2==0){
            for(int row=0; row<=rows-1; row++){
                cout<<array[row][col]<<' ';
            }
            }
        else{
            for(int row=rows-1; row>=0; row--){
                cout<<array[row][col]<<' ';
            }
        }
    }
    cout<<endl;
}
int main(){
    //2D arrays
    int arr[50][50];
    //Rows, Cols
    int rows, cols;
    cin>>rows>>cols;
    //Read a 2D array
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    //Print a 2D array
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<' ';
        }
      cout<<endl;
    }
    wavePrint(arr, rows, cols);
    return 0;
}
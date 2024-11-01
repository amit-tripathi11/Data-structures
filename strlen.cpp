#include <iostream>
#include <string.h>
using namespace std;
//Function to read character array, also calculate the length
void readLine(char *arr, int len, int delim){
    int cnt =0;
    char ch;
    while(true){
        ch=cin.get();
        arr[cnt]=ch;
        if(cnt==len-1||ch==delim){
           break;
        }
        cnt++;
    }
    arr[cnt]='\0';//Null termination
    cout<<cnt<<endl;
}
//Function to find the length of the array
int length(char *arr){
    int i;
    for(i=0; arr[i]!='\0'; i++){}
    return i;
}
int main(){
    char arr[100];
    readLine(arr,100,'@');
    cout<<arr<<endl;
    cout<<strlen(arr)<<endl;
    cout<<"My length "<<length(arr)<<endl;
    return 0;
}
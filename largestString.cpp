#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //Read a integer N, followed by N strings
    // Print the largest String
    char current[1000]; //as per the problem constraints
    // Part-1 Reading Data
    int n;
    cin>>n;
    
    cin.get(); //this consume the extra '\n' that we have at integer input
    
    //Part-2 track the largest string
    char largest[1000];
    int len=0;

    for(int i=0; i<n; i++){
        cin.getline(current,1000,'\n');
        int currentLength = strlen(current);
        if(currentLength > len){
            //update
            len=currentLength;
            //write a loop to copy the content of current array to largest array
            //or use inbuilt function strcpy
            strcpy(largest,current);
        }
    }
    cout<<largest<<endl;
    cout<<len<<endl;
     return 0;
}
#include <iostream>
using namespace std;
int main(){
    //Reading a character 
    char ch;
    //cin>>ch;//Ignore the white spaces and new line
    //Read any kind of letter including spaces
    ch = cin.get();
    //Output
    if(ch==' '){
        cout<<"You entered a space";
    }
    else if(ch=='\n'){
        cout<<"You entered a Newline";

    }
    else{
        cout<<"You entered a char "<<ch<<endl;
    }
    return 0;
}
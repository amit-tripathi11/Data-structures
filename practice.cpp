#include <iostream>
using namespace std;
void playMusic(int songId, float a){
    cout<<" Playing song "<<songId<<" for "<<a;
}
//Functioin overloading via different no. of parameter
//function overloading -> Multiple functions, same name
int playMusic(int song){
    return song;
}
int main(){
    playMusic(4,0);
    cout<<endl<<playMusic(3)<<endl;
    cout<<playMusic(8);
    return 0;
}
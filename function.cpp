#include <iostream>
using namespace std;
void play_music();

int main(){
    play_music(); //call the function
    int a,v,d;
    cin>>a>>v;
    d=a*(v-2);
    cout<<d<<endl;
   return 0;
}
void play_music(){
    cout<<"Enter your favoring song ";
    int song;
    cin>> song;
    cout<<"Playing song "<<song;
    
}



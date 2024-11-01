#include <iostream>
using namespace std;
void playMusic(int songId, float duration){
    cout<< "Playing song "<<songId<<" for "<<duration<<" minutes"<<endl;
}
int add(int a, int b){
    return a+b;
}
 factorial(int n){
    int m=1;
    for(int i=1; i<=n; i++){
    
        m=m*i;
    }
    return m;
}
int main(){
    playMusic(9,0);
    playMusic(6,8);
    playMusic(5,6);
    int a,b,k;
    cin>>a>>b;
   // int res = add(a,b);
   cout<<add(a,b)<<endl;
   cin>>k;
   cout<<factorial(k);
    return 0;
}



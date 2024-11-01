#include <iostream>
using namespace std;
void square(int *x, int *y){
    *x=(*x)* --(*y);
}
int main() {
    int number=30;
    square(&number, &number);
    cout<<number<<endl;
    int m=40, n=39;
    cout<<&m<<endl<<&n<<endl;//you get the address of m and n in hexadecimal
   char letter='a';
   cout<< &letter << endl;
   cout<<(void *)&letter<<endl;
    return 0;
}
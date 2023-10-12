/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int medida1;
    int medida2;
    int medida3;
    
    cout<<"digite as três medidas do triangulo" << endl;
    cin >> medida1;
    cin >> medida2;
    cin >> medida3;
    

    if(medida1 <90 && medida2 <90 && medida3 <90){
        cout << "é acutângulo";
    }else if (medida1 >90 || medida2 >90 || medida3 >90){
        cout << "é obtusângulo";
    }else{
        cout << "é retangulo" ;
    }
    
   

    return 0;
}

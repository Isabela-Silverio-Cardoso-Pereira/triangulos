
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

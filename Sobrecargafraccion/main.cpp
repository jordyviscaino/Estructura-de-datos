#include <iostream>
#include "Frac.h"
int main(){
    Frac F1, F2, result;

    system("cls");
    cout << "Ingresar la primera fracci�n:" << endl;
    F1.in();

    cout << "Ingresar la segunda fracci�n:" << endl;
    F2.in();

    result = F1 * F2;
    result.out();

����return�0;
}

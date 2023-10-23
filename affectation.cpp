#include <iostream>
using namespace std;

int main()
{
    int a(4), b(5); //Déclaration de deux variables

    cout << "a vaut : " << a << " et b vaut : " << b << endl;

    cout << "Affectation !" << endl;
    a = b; //Affectation de la valeur de 'b' à 'a'.

    cout << "a vaut : " << a << " et b vaut : " << b << endl;

    return 0;
}
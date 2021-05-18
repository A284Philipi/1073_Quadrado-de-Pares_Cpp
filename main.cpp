#include <iostream>

using namespace std;

int main()
{
    long long int numero, cont = 2, quadrado;
    cin >> numero;
    while (cont <= numero){
        quadrado = cont * cont;
        cout << cont << "^2 = " << quadrado <<endl;
        cont = cont + 2;
    }
    return 0;
}

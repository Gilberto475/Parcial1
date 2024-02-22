#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<double> numeros;

   
    while (true) {
        double numero;
        cout << "Ingrese un número (o cualquier letra para detenerse): ";

  
        if (cin >> numero) {
         
            numeros.push_back(numero);
        } else {
        
            cout << "Deteniendo la entrada de números." << endl;
            break;
        }
    }


    cout << "Números ingresados: ";
    for (double num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
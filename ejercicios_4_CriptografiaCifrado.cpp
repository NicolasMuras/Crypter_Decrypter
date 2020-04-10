#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int numero;
    int size_num = 1;
    int digito = 0;
    int suma = 0;
    int digito_1 = 0;
    int digito_2 = 0;
    int digito_3 = 0;
    int digito_4 = 0;
    int temp = 0;
    cout<<"Introduzca un numero de 4 digitos: ";cin>>numero;
    int contar = numero;

    while(contar/10 > 0)
    {
        contar = contar / 10;
        size_num++;
    }
    cout<<"Su numero tiene: "<<size_num<<" digitos !"<<endl;

   while (size_num >= 1){
        int digito = numero;

        int contador_inn = 2;
        while (contador_inn <= size_num){ // Elimina los digitos sobrantes posteriores.
            digito = digito / 10;
            contador_inn++;
        }
        contador_inn = 1;
        while (contador_inn <= size_num){ // Elimina los digitos sobrantes anteriores.
            digito = digito % 10;
            contador_inn++;
        }
        digito +=7;
        cout<<digito<<endl;
        digito = digito % 10;

        contador_inn = 2;
        while (contador_inn <= size_num){ // Agregar el digito al final del numero.
            digito = digito * 10;
            contador_inn++;
        }
        suma = suma + digito; // Creando el nuevo numero.
        size_num--;
   }
   cout<<endl;
   cout<<"Numero cifrado es: "<<suma<<endl;
    // Invertir digitos 1 y 3
    digito_1 = suma / 1000;
    digito_3 = suma % 100 / 10;
    temp = digito_1;
    digito_1 = digito_3;
    digito_3 = temp;

    // Invertir digitos 2 y 4
    digito_2 = suma % 1000 / 100;
    digito_4 = suma % 10 / 1;
    temp = digito_2;
    digito_2 = digito_4;
    digito_4 = temp;

    cout<<endl;

    // Crear el numero entero de 4 cifras con los digitos.
    digito_1 = digito_1 * 1000;
    digito_2 = digito_2 * 100;
    digito_3 = digito_3 * 10;

    suma = digito_1 + digito_2 + digito_3 + digito_4;
    cout<<"Numero con cifras invertidas: "<<suma<<endl;
    cin>>temp;

    return 0;
}


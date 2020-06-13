#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
    //Declaracion de variables a utilizar
    int Mnum, n, i=5;
    bool repetir;
    int intento = 5;
     
    Mnum = 51;//Este es el numero que el usuario deve adivinar

    //Presentacion
    cout <<endl <<endl;
    cout << "\t-- Adivina el numero magico --";
    cout <<endl <<endl;

    do//este es el bucle que hace que se repita la solicitud de un numero al usuario
    {
        cout << "Cual es el numero magico?" <<endl;
        cout << "Es un entero entre 1 y 100\nPara salir ingresa 0\nIngresa tu numero: ";
        cin  >> n;//numero dado por el usuario
        cout <<endl <<endl;
       
        if(n != 0)  //el numero dado por el ususario es evaluado
        {           //si es diferente de cero, sera evaluado para ver que tipo de numero es
                    //en caso de que sea cero para al else
            
            if(n > Mnum)//segundo if
            {
                //esta intrucciones solo se ejecutaran si el numero dado por el usuario es mayor que el numero que busca
                cout << "--> El numero magico es menor que " << n  <<endl;
                cout << "--> Te quedan " << intento - 1 << " intentos" <<endl;
                cout <<endl <<endl;
                repetir = 1;
            }
            else if(n < Mnum)
            {
                //esta intrucciones solo se ejecutaran si el numero dado por el usuario es menor que el numero que busca
                cout << "--> El numero magico es mayor que " << n  <<endl;
                cout << "--> Te quedan " << intento - 1 << " intentos" <<endl;//cada vez que se ejecute un turno el usuario tendra un intento menos
                cout <<endl <<endl;
                repetir = 1;
            }
            else if(n > 100)
            {
                //esta intrucciones solo se ejecutaran si el numero dado por el usuario no esta dentro del rango de 1 a 100
                cout << "--> El numero magico es un entero entre 1 y 100";
                cout << "--> Te quedan " << intento - 1 << " intentos" <<endl;//cada vez que se ejecute un turno el usuario tendra un intento menos
                cout <<endl <<endl;
                repetir = 1;
            }
            else
            {
                //esta intrucciones solo se ejecutaran si el numero dado por el usuario es igual que el numero que busca
                cout << "Felicidades haz encontrado el numero magico" <<endl;
                cout << "\t-- 51 --";
                cout <<endl <<endl;
                intento--;//cada vez que se ejecute un turno el usuario tendra un intento menos
                repetir = 0;
            }       
        }
        else//este es el else del primeri if
        {   //si se ejecuta este else quiere decir que el usuario decidio salir del programa dijitando 0
            cout <<endl <<endl;
            cout << "El numero que buscabas era 51. \nGracias por participar!";
            cout <<endl <<endl;
            repetir = 0;
        }
        intento--;//cada vez que se ejecute un turno el usuario tendra un intento menos
    }
    while(repetir == 1);//para que se repita la variable repetir tiene que ser true osea 1
}
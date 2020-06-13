#include "iostream"
#include "math.h"

using namespace std;

//esta funcion solo recibe el valor entero del año
bool bisiesto(int year) //Esta es la funcion para calcular si un año es bisiesto
{
    int p1, p2_1, p2_2;//Estas son las variables en donde se almacenaran los resultados de las pruevas
    bool tipo;//En esta variable se almacenara el valor 0 o 1 para saver si es bisiesto o no 

    p1 = year % 400;//primera prueba: el año sea divisibles entre 400

    //la prueva 2 contanta de dos partes
    p2_1 = year % 4;//la primera: el año sea divisible entre 4
    p2_2 = year % 100;//la segunda: el año no sea divisible entre 100

    if(p1 == 0)//por medio de este if se verifica si la primera prueva se cumple(sea divisible entre 400)
        tipo = 1;//Si se cumple tipo es igual a 1 
    else if((p2_1 == 0)&&(p2_2 != 0))//por medio de este if se verifica si la Segunda prueva se cumple(sea divisible entre 4 y que no sea dibisible entre 100)
        tipo = 1;//Si se cumple tipo es igual a 1 
    else 
        tipo = 0;//Si no se cumple ninguan de las pruevas tipo es igual a 0

return tipo;
}

int main(void)
{
    int aa;
    bool tipoaa;//variables a utilizar

    cout <<endl <<endl;
    cout << "Saber si un a" << char(164) << "o es bisiesto";//Presentacion
    cout <<endl <<endl;
    cout << "Ingrese el a"<< char(164) <<"o a evaluar: ";//se solicita al usuario ingresar el año 
    cin  >> aa;//variables del año
    cout <<endl <<endl;
    
    //se ejecuta la funcion para saver si es bisiesto 
    tipoaa = bisiesto(aa);//el resultado es de tipo bool osea 0 o 1

    if(tipoaa == 1)//al ser tipoaa igual a 1 indica que el año es bisiesto
        cout << "El a" << char(164) << "o " << aa << " si es bisiesto." <<endl <<endl;
    else//de lo contratario no es bisiesto
        cout << "El a" << char(164) << "o " << aa << " no es bisiesto." <<endl <<endl;
}

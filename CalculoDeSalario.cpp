#include "iostream"
#include "math.h"

using namespace std;

float pagoT(float H_Work, float H_Extra)//Esta funcion es para calcular el salario total
{
    float SalarioT, SalarioR;//variables a utilizar
    /*
    En la funcion if compruebo si el empleado tiene horas extras.
    En el caso que las tenga se suman con la horas trabajadas.
    En el caso que no las tenga solo se suman las horas trabajadas.
    Tambien se realiza la multiplicacion de dinero con su horas respectivas
    */
    if(H_Extra != 0)
    {
        SalarioT = (H_Work * 1.75) + (H_Extra * 2.50);
    }
    else
    {
        SalarioT = H_Work * 1.75;
    }
return SalarioT;
}

float pagoR(float SalarioT)//Esta funcion es para calcular el salario real
{
    float SalarioR;//variables a utilizar
    
    /*
    Descuntos.
    El descunto del seguro social es del 4% del salario, el salario restante es del 96% del salario total.
    El descunto da la AFP es del 6.25% del salario, el salario restante es del 93.75% del salario total.
    El descunto de la renta es del 10% del salario, el salario restante es del 90% del salario total.
    Pero la renta solo aplica a los que tengan mas de $500 dolares.
    */
   if(SalarioT > 500)
   {
       //Al operar ( 100% - 4% - 10% - 6.25% ) elresultado es 79.75%, por ser porcentaje se divide entre 100.
       //Aplicando una regla de tres 
       SalarioR = SalarioT * 0.7975;
   }
   else
   {
       //Al operar ( 100% - 4% - 6.25% ) elresultado es 89.75%, por ser porcentaje se divide entre 100.
       //Aplicando una regla de tres
       SalarioR = SalarioT * 0.8975;
   }
return SalarioR;
}


int main(void)
{
    //Declaracion de variables a utilizar
    int C_empleados, H_Work,H_Extra;
    float SalarioR, SalarioT;
    int Num_empleado=0;//esta bariable se iguala a 0 devido aque despues sele sumara de uno en uno 
    //esto para evitar tenga errores con el numero de empleado

    //Presentacion del programa
    cout <<endl <<endl;
    cout << "\t-- Bienbenido a Salarios Calcu --";
    cout <<endl <<endl;
    //Asignacion de datos a las variables para la cantidad de empleados que se les calculara el sueldo
    cout << "\tIngrese la cantidad de empleados:  ";
    cin  >> C_empleados;

    do
    {
        Num_empleado = Num_empleado+1;//anteriormente Num_empleado era 0 y se le sumara uno en cada ciclo 
        cout <<endl <<endl;
        cout << "* Datos del empleado # " << Num_empleado <<endl;
        cout <<endl;
        cout << "\tIngrese el numero de horas trabajadas por el empleado # " << Num_empleado <<": ";
        cin  >> H_Work;//horas que ha trabajado el empleado
        cout << "\tIngrese el numero de horas extras trabajadas por el empleado # " << Num_empleado <<": ";
        cin  >> H_Extra;//horas extras que ha trabajado el empleado

        SalarioT = pagoT(H_Work, H_Extra);//calculo del salario total
        SalarioR = pagoR(SalarioT);//calculo del salario real
        SalarioT = floor(SalarioT);//Aproximacion del salario total
        SalarioR = floor(SalarioR);//Aproximacion del salario real
   
        //Se puestra en terminal el salario total y el salario real del empleado
        cout << "\tSalario total a pagar al empleado # " << Num_empleado <<": $" << SalarioT;
        cout <<endl;
        cout << "\tSalario real a pagar al empleado # " << Num_empleado <<": $" << SalarioR;
        cout <<endl;
    }
    while(C_empleados != Num_empleado);
    //al inicio Num_empleado simpre sera 1 y se le cumara uno cada vez que se repita el proseso 
    //C_empleado sera la cantidad que el usuario ingrese
    //cuando el numero del empleado sea igual la cantidad de empleados, finalizara el do...while


    cout <<endl <<endl;
    cout << "\t-- Gracias por utilizar Salarios Calcu. --";//cierre
    cout <<endl <<endl;
    
}
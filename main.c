#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h" //Incluyo la libreria que cree para albergar a las funciones que voy a usar.

int main(){
    char seguir='s'; //Declaro las variables que se usan en el main.
    int opcion=0;
    int x=0;
    int y=0;


    do{   //Como se que el codigo tiene que ejecutarse aunque sea una vez, usamos un do while.
          //Comienzo escribiendo las opciones que se van a usar en la calculadora.
        system("cls");
        printf("////////////////////////////////////////////////////\n");
        printf("////////////////////////////////////////////////////\n");
        printf("//\tA=%d\t\tB=%d\n", x, y);//Uso este printf para que los valores que se ingresen queden en pantalla y se puedan ver.
        printf("////////////////////////////////////////////////////\n");
        printf("//\t1- Ingresar 1er operando (A=x)\n");
        printf("//\t2- Ingresar 2do operando (B=y)\n");
        printf("//\t3- Calcular la suma (A+B)\n");
        printf("//\t4- Calcular la resta (A-B)\n");
        printf("//\t5- Calcular la division (A/B)\n");
        printf("//\t6- Calcular la multiplicacion (A*B)\n");
        printf("//\t7- Calcular el factorial (A!)\n");
        printf("//\t8- Calcular todas las operaciones\n");
        printf("//\t9- Salir\n");
        printf("////////////////////////////////////////////////////\n");
        printf(" Ingrese una opcion: ");
        scanf("%d",&opcion);

        while(!validarRango(opcion,1,9)) //Este while hace que cualquier opcion que no este en el rango declarado, de error
                                         //y nos permita ingresar una opcion valida.
            {
            printf("\n Error. Ingrese una opcion: ");
            scanf("%d", &opcion);
        }
        switch(opcion)//Como este codigo usa opciones, la mejor manera de ejecutarlo es con un switch.
        {
            case 1: //Declaramos cada caso para que cada opcion que ingresemos se ejecute.
                printf("\nIngrese primer numero: ");
                scanf("%d", &x);
                break;
            case 2:
                printf("\nIngrese segundo numero: ");
                scanf("%d", &y);
                break;
            case 3:
                printf("\nLa suma de los operandos da: %d\n\n",sumar(x,y));
                system("pause");
                break;
            case 4:
                printf("\nLa resta de los operandos da: %d\n\n",restar(x,y));
                system("pause");
                break;
            case 5:
                if(y==0) //Aca usamos un if para avisar al usuario que no se puede dividir por cero
                        //y que tiene que ingresar otro divisor.
                {
                    printf("\nEl divisor no puede ser cero.\nIngrese otro numero.\n\n");
                }else{
                    printf("\nLa division de los operandos da: %.2f\n\n",dividir(x,y));
                }
                system("pause");
                break;
            case 6:
                printf("\nLa multiplicacion de los operandos da: %d\n\n",multiplicar(x,y));
                system("pause");
                break;
            case 7:
                if(x<0)//Usamos un if para avisar que no se puede sacar el factorial de un numero negativo.
                {
                    printf("\nNo hay factorial de numeros negativos.\nIngrese otro numero.\n\n");
                }else if(x>12)//Este if se ejecutara cuando ingresemos un facotorial muy grande para calcular.
                {
                    printf("\nError. Resultado muy grande para la calculadora.\n\n");
                }else//Este else calcula el factorial de ambos numeros ingresados y los muestra en pantalla.
                {
                    printf("\nEl factorial del numero: %d es: %li\n\n",x,factorial(x));
                    printf("\nEl factorial del numero: %d es: %li\n\n",y,factorial(y));
                }
                system("pause");
                break;
            case 8://Usamos este case para realizar todas las opciones de una sola vez.
                todasLasOp(x,y);
                system("pause");
                break;
            case 9://Al declarar "seguir= 'n'" se corta el while y nos deja salir, para terminar el uso del programa.
                seguir = 'n';
                break;
            default:
            break;
        }
    }while(seguir=='s');
    return 0;
}

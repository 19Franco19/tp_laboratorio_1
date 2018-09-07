/** \brief La función "sumar" nos permite sumar dos numeros que ingrese el usuario.
 *
 * \param x= x es el primer numero que ingresamor
 * \param y= y es el segundo numero que ingresamos
 * \return Nos da como resultado la suma de ambos numeros.
 *
 */
int sumar(int x, int y)
{
    int resultado;
    resultado= x+y;
    return resultado;
}
/** \brief La función "restar" nos permite restar dos numeros que ingrese el usuario.
 *
 * \param x= x es el primer numero que ingresamos.
 * \param y= y es el primer numero que ingresamos.
 * \return Nos da como resultado la resta entre ambos numeros.
 *
 */
int restar(int x, int y)
{
    int resultado;
    resultado= x-y;
    return resultado;
}
/** \brief La función "multiplicar" nos permite multiplicar dos numeros que ingrese el usuario.
 *
 * \param x= x es el primer numero que ingresamos.
 * \param y= y es el primer numero que ingresamos.
 * \return Nos da como resultado el producto entre ambos numeros.
 *
 */
long multiplicar(int x, int y)
{
    long resultado;
    resultado= x*y;
    return resultado;
}
/** \brief La función "dividir" nos permite dividir dos numeros que ingrese el usuario.
 *
 * \param x= x es el primer numero que ingresamos.
 * \param y= y es el primer numero que ingresamos.
 * \return Nos da como resultado el cociente entre ambos numeros.
 *
 */
float dividir (int x, int y)
{
    float resultado;
    resultado= (float)x/y;
    return resultado;
}
/** \brief La función "factorial" nos permite calcular el factorial de los dos numeros que ingrese el usuario.
 *
 * \param x= x es el primer numero que ingresamos.
 * \param y= y es el primer numero que ingresamos.
 * \return Nos da como resultado el factorial de cada numero por separado.
 *
 */
long factorial(int x)
{
    long resultado;
    if(x==0)
    {
    resultado=1;
    }else
    {
    resultado=x*factorial(x-1);
    }
    return resultado;
}
/** \brief La función "todasLasOp" calcula todas las operaciones anteriores.
 *
 * \param x= x es el primer numero que ingresamos.
 * \param y= y es el primer numero que ingresamos.
 * \return Calcula todas las operaciones antes declaradas en las funciones y muestra el resultado de cada una.
 *
 */
void todasLasOp(int x, int y)
{
printf("\n");
printf("La suma de los operandos da: %d\n",sumar(x,y));
printf("La resta de los operandos da: %d\n",restar(x,y));
if(y==0)
{
    printf("Division imposible.\nEl divisor no puede ser cero.\n");
}else
{
    printf("La division de los operandos da: %.2f\n",dividir(x,y));
}
printf("La multiplicacion de los operandos da: %d\n",multiplicar(x,y));
if(x<0)
{
    printf("Factoreo imposible.\nEl numero no puede ser menor a cero.\n");
}else if(x>12)
{
    printf("Error. Resultado muy grande para la calculadora.\n");
}
else
{
    printf("El factorial de %d da: %li\n",x,factorial(x));
    printf("El factorial de %d da: %li\n",y,factorial(y));
}
printf("\n");
}
/** \brief La función "validarRango" valida que la opcion que ingresemos este dentro de los parametros que se dan en la funcion.
 *
 * \param opcion= opcion es el numero de opcion que ingresa el usuario.
 * \param desde= desde es el 1 que se declara en el prototipo de la funcion.
 * \param hasta= hasta es el 9 que se declara en el prototipo de la funcion.
 * \return Si retorna 1 se encuentra dentro del rango, si retorna cero, estamos fuera del rango.
 */
int validarRango(int opcion, int desde, int hasta)
{
    int resultado=0;
    if((opcion>=desde)&&(opcion<=hasta))
    {
        resultado= 1;
    }
return resultado;
}

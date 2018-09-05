//Empezamos con la definicion de las biblotecas
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

float suma(float, float);
float resta(float, float);
float division(float, float);
float multiplicacion (float, float);
float factor (float);
float factorB(float);




//definimos el programa pincipal
int main()
{
//definimos las variables principales donde ingresaremos los numeros que nosotros queremos que
//hagan las operacion del trabajo practico.
    float A;
    float B;

    printf("Ingrese el primer operando:");
    scanf("%f",&A);
    __fpurge(stdin);
    printf("Ingrese el segundo operando: ");
    scanf("%f",&B);
    __fpurge(stdin);




    printf("Resultado de la suma es:  %.f\n", suma(A,B));
    printf("Resultado de la resta es:  %f\n", resta(A,B));
    printf("El resultado de la division es: %.2f \n", division (A,B));
    printf("El resultado de la multiplicacion es:  %.1f \n", multiplicacion (A,B));
    printf("El factoria del primer operando es:  %.1f\n" , factor (A));
    printf("Y el factoria del segundo operando es:  %.1f\n", factor (B));





return 0;
}


//empezar la suma
float suma (float num1, float num2)
{

    float resultado= 0;
    resultado= num1 + num2;

    return resultado;
}

//empezar la resta

float resta (float num1, float num2)
{

    float resultadoR= 0;
    resultadoR= num1 - num2;

    return resultadoR;
}

//empieza la division

float division(float numero1, float numero2)
{
    float resultadoD;
    float dividendo;
    float divisor;

    dividendo=numero1;
    divisor=numero2;

    if(divisor==0)
    {

        printf("No es posible dividir por cero");

    return resultadoD;

    }else{

    resultadoD= dividendo / divisor;


    return resultadoD;

    }


}

float multiplicacion (float numero1, float numero2)
{

    int resultadoM= 0;
    resultadoM= numero1 * numero2;

    return resultadoM;
}

float factor(float numero1)
{
float factorial=1;

    while (numero1!=1) {

      factorial=factorial*numero1;
      numero1--;
    }
    return factorial;
    }

float factorB(float numero2)
{
float factorialB=1;

    while (numero2!=1) {

      factorialB=factorialB*numero2;
      numero2--;
    }
    return factorialB;
    }


/*int factorial2;

    while(numero2!=0) {
      factorial2=factorial2*numero2;
      numero2--;
    }
    return factorial2;
    }
*/




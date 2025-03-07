#include <stdio.h>
#include <math.h>
////aqui va la funcion suma
int suma(int a, int b){
	return a+b;
}

////aqui va la funcion resta

////aqui va la funcion division



// Función para multiplicar dos números
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

int main() {
    float a, b, resultado;

    // Solicitar al usuario los dos números
    printf("Introduce el primer número: ");
    scanf("%f", &a);
    printf("Introduce el segundo número: ");
    scanf("%f", &b);

    // Llamar a la función multiplicar
    resultado = multiplicar(a, b);

    // Mostrar el resultado
    printf("El resultado de la multiplicación es: %.2f\n", resultado);

    return 0;
}
 




int main (){
	int a,b,z;
	do{
		printf("\nque deseas hacer\n");
		printf("1)sumar\n2)restar\n3)dividir\n4)multiplicar\n0)salir\n");
		scanf("%d",&z);
		switch(z){
			case 1:
				printf("ingresa el valor de a\n");
				scanf("%d",&a);
				printf("ingresa el valor de b\n\n");
				scanf("%d",&b);
				printf("el valor de la suma es:%d\n\n",suma(a,b));
				break;
			case 2:
				printf("ingresa el valor de a\n");
				scanf("%d",&a);
				printf("ingresa el valor de b\n\n");
				scanf("%d",&b);
				printf("el valor de la resta es:%d\n\n",resta(a,b));
				break;
			case 3:
				printf("ingresa el valor de a\n");
				scanf("%d",&a);
				printf("ingresa el valor de b\n\n");
				scanf("%d",&b);
				printf("el valor de la division es:%d\n\n",division(a,b));
				break;
			case 4:
				printf("ingresa el valor de a\n");
				scanf("%d",&a);
				printf("ingresa el valor de b\n\n");
				scanf("%d",&b);
				printf("el valor de la multiplicacion es:%d\n\n",multiplicacion(a,b));
				break;
			case 0:
				printf("saliendo del programa\n");
				break;

			default:
				printf("opcion no valida");
		}
	}while(z != 0);
	return 0;
}

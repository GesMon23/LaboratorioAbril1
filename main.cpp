#include <iostream>
#include "biblioteca.hpp"
using namespace std;
int main(int argc, char** argv) {
	int Num1, Num2, Residuo, Resultado;
	char Op;
	Op='a';
	while(Op!='0'){
		printf("CALCULADORA \n");
		printf("MENU DE OPCIONES\n");
		printf("1: SUMA\n");
		printf("2: RESTA\n");
		printf("3: MULTIPLICACION\n");
		printf("4: DIVISION\n");
		printf("0: SALIR\n");
		printf("INGRESE LA OPERACION QUE DESEA REALIZAR: "); 
		cin>>Op;
		if (Op!='0'){
			printf("INGRESE SU PRIMER NUMERO: "); scanf("%d", &Num1);
			printf("INGRESE SU SEGUNDO NUMERO: "); scanf("%d", &Num2); printf("\n");
			switch (Op){
				case '1':
					Resultado=suma(Num1, Num2);
					printf("EL RESULTADO DE LA SUMA ES: %d\n\n", Resultado);
				break;
				case '2':
					Resultado=resta(Num1, Num2);
					printf("ADVERTENCIA: SE RESTARA EL NUMERO MAYOR CON EL MENOR\n");
					printf("EL RESULTADO DE LA RESTA ES: %d\n\n", Resultado);
				break;
				case '3':
					Resultado=mult(Num1, Num2);
					printf("EL RESULTADO DE LA MULTIPLPICACION ES: %d\n\n", Resultado);
				break;
				case '4':
					Resultado=div(Num1, Num2);
					printf("ADVERTENCIA: SE DIVIDIRA EL NUMERO MAYOR CON EL MENOR\n");
					printf("EL RESULTADO DE LA DIVISION ES: %d\n\n", Resultado);
				break;
				default:
					printf("LA OPCION DE ELIGIO NO ES VALIDA\n\n");
			}
		}
	}
	system("pause");
}

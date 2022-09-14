#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "mathlib.h"

int menu();

int main() {

	// Variables para suma, resta y multiplicacion
	int numeroUno;
	int numeroDos;
	// Variables para la division
	float numeroTres;
	float numeroCuatro;

	int opcionSeleccionada = menu();
	
	while (opcionSeleccionada != 0) 
	{
		switch (opcionSeleccionada)	{
			case 2:
				printf("\nIngrese primer valor: ");
				scanf("%d",&numeroUno);
				printf("Ingrese segundo valor: ");
				scanf("%d",&numeroDos);
				
				printf("\nResultado: %d", sumar(numeroUno, numeroDos));
				break;
			case 3:
				printf("\nIngrese primer valor: ");
				scanf("%d",&numeroUno);
				printf("Ingrese segundo valor: ");
				scanf("%d",&numeroDos);
				
				printf("\nResultado: %d", restar(numeroUno, numeroDos));
				break;
			case 4:
				printf("\nIngrese primer valor: ");
				scanf("%d",&numeroUno);
				printf("Ingrese segundo valor: ");
				scanf("%d",&numeroDos);
				
				printf("\nResultado: %d", multiplicar(numeroUno, numeroDos));
				break;
			case 5:
				printf("\nIngrese primer valor: ");
				scanf("%d",&numeroTres);
				printf("Ingrese segundo valor: ");
				scanf("%d",&numeroCuatro);
				
				dividir(numeroTres, numeroCuatro);
				break;
				
			default:
				printf("Ups opcion no disponible en menu");
		}
		
		printf("\n\nDesea realizar otra operacion (1->SI, 0->NO) ");
		scanf("%d",&opcionSeleccionada);
		system("cls");
		
		if (opcionSeleccionada == 0) {
			break;
		} else {
			opcionSeleccionada = menu();
		}
	}

	getche();
	return 0;
}


int menu() {
	int opcion;

	printf("=== MENU DE OPERACIONES ===");
	printf("\n2. Suma");
	printf("\n3. Resta");
	printf("\n4. Multiplicacion");
	printf("\n5. Division");
	printf("\n0. Salir");

	printf("\nSeleccione una operacion? ");
	scanf("%d",&opcion);

	return opcion;
}

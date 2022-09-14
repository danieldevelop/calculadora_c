#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menu();

int main() {

	// Variables para suma, resta y multiplicacion
	int numeroUno;
	int numeroDos;
	// Variables para la division
	float numeroTres;
	float numeroCuatro;

	int opcionSeleccionada = menu();


	getche();
	return 0;
}


int menu() {
	int opcion ;

	printf("=== MENU DE OPERACIONES ===");
	printf("\n2. Suma");
	printf("\n3. Resta");
	printf("\n4. Multiplicación");
	printf("\n5. División");
	printf("\n0. Salir");

	printf("\nSeleccione una operación? ");
	scanf("%d",&opcion);

	return opcion;
}

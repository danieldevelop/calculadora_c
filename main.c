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
	printf("\n4. Multiplicaci�n");
	printf("\n5. Divisi�n");
	printf("\n0. Salir");

	printf("\nSeleccione una operaci�n? ");
	scanf("%d",&opcion);

	return opcion;
}

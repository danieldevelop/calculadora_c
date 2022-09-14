#include <stdio.h>
#include <stdbool.h> //Para las variables y/o funciones booleanas

int sumar(int valorUno, int valorDos) {
	return (valorUno + valorDos);
}

int restar(int valorUno, int valorDos) {
	return (valorUno - valorDos);
}

int multiplicar(int valorUno, int valorDos) {
	return (valorUno * valorDos);
}

bool dividebyZero(float valorDos) {
	if (valorDos == 0) {
		return true;
	} else {
		return false;
	}
}

float dividir(float valorUno, float valorDos) {
	if (!dividebyZero(valorDos)) {
		printf("\nResultado %0.3f", (valorUno / valorDos));
	} else {
		printf("\nNo se puede dividir entre cero");
	}
}



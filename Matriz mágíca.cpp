#include <stdio.h>

int MatrizMagica(int matriz[3][3]); // Checar si es una matriz mágica

int main() 
{
    int matriz[3][3];

    printf("Ingrese los valores para la matriz de 3x3:\n");

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++)
		 {
            printf("Posicion (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
	printf("\n");
	
	
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++)
		 {
          printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    if (MatrizMagica(matriz)) 
	{	
		printf("\x1b[32m");//Color verde
        printf("La matriz es magica.\n");
        printf("\x1b[0m");//Resetear color
    } 
	else
	{
        printf("\x1b[32m");//Color verde
		printf("La matriz no es magica.\n");
		printf("\x1b[0m");//Resetear color
    }

    return 0;
}

int MatrizMagica(int matriz[3][3]) // Checar si es una matriz mágica
{
    
	int sumaFila = 0;
	for (int j = 0; j < 3; j++) 
	{
	    sumaFila += matriz[0][j]; // Calcula la suma de la primera fila    
	}
	printf("\nSuma fila 1: %d\n", sumaFila);
	
	
	for (int i = 0; i < 3; i++) // Imprime la suma de todas las filas
	{
	    int sumaActual = 0;
	    for (int j = 0; j < 3; j++)
		{
	        sumaActual += matriz[i][j];
	    }
	    printf("Suma fila %d: %d\n", i + 1, sumaActual);
	    if (sumaActual != sumaFila) 
		{
	        return 0; // No es una matriz mágica
	    }
	}
	
	// Imprime la suma de todas las columnas
	for (int j = 0; j < 3; j++) 
	{
	    int sumaActual = 0;
	    for (int i = 0; i < 3; i++)
		{
	        sumaActual += matriz[i][j];
	    }
	    printf("Suma columna %d: %d\n", j + 1, sumaActual);
	}
	
	// Imprime la suma de la diagonal principal
	int sumaDiagonalPrincipal = 0;
	for (int i = 0; i < 3; i++) 
	{
	    sumaDiagonalPrincipal += matriz[i][i];
	}
	printf("Suma diagonal principal: %d\n", sumaDiagonalPrincipal);
	
	if (sumaDiagonalPrincipal != sumaFila)
	{
	    return 0; // No es una matriz mágica
	}
	
	// Imprime la suma de la diagonal secundaria
	int sumaDiagonalSecundaria = 0;
	for (int i = 0; i < 3; i++) 
	{
	    sumaDiagonalSecundaria += matriz[i][2 - i];
	}
	printf("\nSuma diagonal secundaria: %d\n", sumaDiagonalSecundaria);

	if (sumaDiagonalSecundaria != sumaFila)
	{
	    return 0; // No es una matriz mágica
	}
	
	return 1; // Es una matriz mágica
}





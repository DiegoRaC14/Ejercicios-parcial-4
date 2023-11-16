#include <stdio.h>

int MatrizMagica(int matriz[3][3]); // Checar si es una matriz mágica

int main() 
{
    int matriz[3][3];

    printf("Ingrese los valores para la matriz de 3x3:\n");//Ingresar valores para la matriz

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++)
		 {
            printf("Posicion (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

	 for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++)
		 {
          printf("%d  ",matriz[i][j]);
        }
        printf("\n");
    }
    

    if (MatrizMagica(matriz)) 
	{
        printf("Es una matriz magica.\n");
    } 
	else
	{
        printf("No es una matriz magica.\n");
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
	printf("Suma fila 1:%d\n",sumaFila);
	
	
	for (int i = 1; i < 3; i++) // Checar las sumas de las filas
	{
	    int sumaActual = 0;
	    for (int j = 0; j < 3; j++)
		{
	        sumaActual += matriz[i][j];
	    }
	    if (sumaActual != sumaFila) 
		{
	        return 0; // No es una matriz mágica
	    }
	}
	
	
	for (int j = 0; j < 3; j++) // Verifica las sumas de las columnas
	{
	    int sumaActual = 0;
	    for (int i = 0; i < 3; i++)
		{
	        sumaActual += matriz[i][j];
	    }
	    if (sumaActual != sumaFila)
		 {
	        return 0; // No es una matriz mágica
	    }
	}
	
	// Verifica la suma de la diagonal principal
	int sumaDiagonalPrincipal = 0;
	for (int i = 0; i < 3; i++) 
	{
	    sumaDiagonalPrincipal += matriz[i][i];
	}
	if (sumaDiagonalPrincipal != sumaFila)
	{
	    return 0; // No es una matriz mágica
	}
	
	// Verifica la suma de la diagonal secundaria
	int sumaDiagonalSecundaria = 0;
	for (int i = 0; i < 3; i++) 
	{
	    sumaDiagonalSecundaria += matriz[i][2 - i];
	}
	if (sumaDiagonalSecundaria != sumaFila)
	 {
	    return 0; // No es una matriz mágica
	}
	
	return 1; // Es una matriz mágica
}



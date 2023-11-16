/*Ejercicio parcial 4*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumaDiagonal(int matriz[5][7]); // Prototipo de suma de la diagonal
int suma1raFila(int matriz[5][7]);
int sumaUltimaColumna(int matriz[5][7]);
int sumaFilasPares(int matriz[5][7]);
int sumaFila3(int matriz[5][7]);
int sumaFila5(int matriz[5][7]);
int sumaColumna2(int matriz[5][7]);
int sumaColumna4(int matriz[5][7]);
int sumaColumna6(int matriz[5][7]);
int sumaDsuperior(int matriz[5][7]);
int sumaDinferior(int matriz[5][7]);

int main()
{
    int i, j, suma = 0;
    int sumaFimpares, sumaCpares;
	srand(time(NULL)); // Semilla números aleatorios
    int matriz[5][7];

    printf("Matriz aleatoria [5x7]: \n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d   ", matriz[i][j]);

            if (i == j)
            {
                suma += matriz[i][j];
            }
        }
        printf("\n");
    }
	sumaFimpares=suma1raFila(matriz)+sumaFila3(matriz)+sumaFila5(matriz);
	sumaCpares=sumaColumna2(matriz)+sumaColumna4(matriz)+sumaColumna6(matriz);

    printf("\nLa suma de la diagonal principal es: %d\n", sumaDiagonal(matriz));
    printf("La suma de la 1ra fila es: %d\n", suma1raFila(matriz));
    printf("La suma de la ultima columna es: %d\n\n", sumaUltimaColumna(matriz));
    
	printf("----------------------------------------------\n");
	printf("Suma de la fila 1: %d\n", suma1raFila(matriz));
	printf("Suma de la fila 3: %d\n", sumaFila3(matriz));
	printf("Suma de la fila 5: %d\n", sumaFila5(matriz));
	printf("La suma total de las filas impares es: %d\n\n",sumaFimpares);
	
	printf("----------------------------------------------\n");
	printf("Suma de la columna 2: %d\n",sumaColumna2(matriz));
	printf("Suma de la columna 4: %d\n",sumaColumna4(matriz));
	printf("Suma de la columna 6: %d\n",sumaColumna6(matriz));
	printf("Suma total de las columnas pares: %d\n\n",sumaCpares);
	
	printf("----------------------------------------------\n");
	printf("\nLa suma de la diagonal principal es: %d\n", sumaDiagonal(matriz));
	printf("Suma de la diagonal superior: \n",sumaDsuperior(matriz));
	printf("Suma de la diagonal inferior: \n",sumaDinferior(matriz));

    return 0;
}

/*Comienzan las funciones*/
int sumaDiagonal(int matriz[5][7])
{
    int i, j, suma = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (i == j)
            {
                suma += matriz[i][j];
            }
        }
    }

    return suma;
}

int suma1raFila(int matriz[5][7])
{
	int i,suma=0;
	
	for (i=0;i<=6;i++)
	{
		suma+=matriz[0][i];
	}
	return suma;
	
	//return matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[0][3] + matriz[0][4]+ matriz[0][5]+ matriz[0][6];
}

int sumaUltimaColumna(int matriz[5][7])
{
    int i, suma = 0;

    for (i=0;i<5;i++)
    {
        suma += matriz[i][6];
    }
    return suma;
}

/*Suma filas impares*/
int sumaFila3(int matriz[5][7])
{
	int i,suma=0;
	
	for (i=0;i<=6;i++)
	{
		suma+=matriz[2][i];
	}
	
	return suma;
}

int sumaFila5(int matriz[5][7])
{
	int i,suma=0;
	
	for (i=0;i<=6;i++)
	{
		suma+=matriz[4][i];
	}
	
	return suma;
}

/*Suma columnas*/
int sumaColumna2(int matriz[5][7])
{
    int i, suma = 0;

    for (i=0;i<5;i++)
    {
        suma += matriz[i][1];
    }
    return suma;
}

int sumaColumna4(int matriz[5][7])
{
    int i, suma = 0;

    for (i=0;i<5;i++)
    {
        suma += matriz[i][3];
    }
    return suma;
}


int sumaColumna6(int matriz[5][7])
{
    int i, suma = 0;

    for (i=0;i<5;i++)
    {
        suma += matriz[i][5];
    }
    return suma;
}

/*Suma diagonales*/

int sumaDsuperior(int matriz[5][7])
{
	    int i,j,suma=0;

    for (i=0;i<5;i++)
    {
        for (j=i+1;j<7;j++)
        {
            suma += matriz[i][j];
        }
    }

    return suma;
}

int sumaDinferior(int matriz[5][7])
{
	    int i,j,suma=0;

    for (i=0;i<5;i++)
    {
        for (j=0;j<i;j++)
        {
            suma += matriz[i][j];
        }
    }
    
    return suma;
}

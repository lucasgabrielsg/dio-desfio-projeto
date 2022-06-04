#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define N_ROWS 6
#define N_COLS 6
#define N_THREADS 6

// Value depend on System core
#define CORE 4

// Maximum matrix size
#define SIZE 4

int matriz[N_ROWS][N_COLS] =
{
    {0, 1, 0, 0, 2, 0},
    {1, 0, 3, 0, 2, 0},
    {0, 3, 0, 6, 0, 0},
    {0, 0, 6, 0, 4, 3},
    {2, 2, 0, 4, 0, 0},
    {0, 0, 0, 3, 0, 0}
};

int grau_vertice[] = {0, 0, 0, 0, 0, 0};

void *calcula(void *arg)
{
    int core = (int)arg;

    for(int i = core * SIZE / 6; i < (core + 1) * SIZE / 6; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if (matriz[i][j] != 0)
            {
                grau_vertice[i]++;
                printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
                printf("grau_vertice[%d] = %d\n\n", i, grau_vertice[i]);
            }
        }
    }
}

void imprimir(int x[N_ROWS][N_COLS])
{
    printf ("-----------------------------\n");
    printf ("|          MATRIZ           |\n");
    printf ("-----------------------------\n");
    printf ("|   | A | B | C | D | E | F |\n");
    printf ("-----------------------------\n");
    for (int i = 0; i < N_ROWS; i++)
    {
        printf("| %c ", i + 65);
        for(int j = 0; j < N_COLS; j++)
        {
            printf ("| %d ", x[i][j]);
        }
        printf ("|\n");
        printf ("-----------------------------\n");
    }

    printf ("\n-----------------------------\n");
    printf("|   ");
    for (int i = 0; i < N_ROWS; i++)
    {
        printf("| %d ", grau_vertice[i]);
    }
    printf ("|\n");
    printf ("-----------------------------\n");
}

int main()
{
    pthread_t thread[N_THREADS];
    int rc, id[N_THREADS];

    for (int i = 0; i < N_THREADS; i++)
    {
        printf("CRIANDO A THREAD: %d\n\n", i);
        rc = pthread_create(&thread[i], NULL, calcula, (void*) &id[i]);
        if (rc)
        {
            printf("ERRO %d\n", rc);
            exit(-1);
        }
    }

    for (int i = 0; i < N_THREADS; i++)
    {
        pthread_join(&thread[i], NULL);
    }
    imprimir(matriz);
    return 0;
}

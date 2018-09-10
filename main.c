#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Jeu dit "il faut trouver le nombre entre 1 et 10" en 3 essais
* en disant juste si le le nombre est plus grand ou plus petit
*/

int main()
{   int nombre_aleatoire = 0;
    int a=1;
    int b=10;
    srand(time(NULL)); // initialisation de rand
    nombre_aleatoire = rand_a_b(a,b);
    printf("%d ",nombre_aleatoire);



    return 0;
}

int rand_a_b(int a, int b)
{

    return rand()%(b-a) +a;
}

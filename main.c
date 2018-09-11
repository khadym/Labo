#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Jeu dit "il faut trouver le nombre entre 1 et 10" en 3 essais
* en disant juste si le le nombre est plus grand ou plus petit
*/

int rand_a_b(int, int);
int main()
{   int nombre_aleatoire = 0, halfNb;
    int a=1, i=0, nbSecret;
    int b=1000;
    char reponse;
    srand(time(NULL)); // initialisation de rand
    nombre_aleatoire = rand_a_b(a,b);
    printf("Le nombre aléatoire généré par le programme est : %d \n",nombre_aleatoire);

    while(i < 10) {
        halfNb = (a+b)/2;
        printf("Le nombre est il > %d \n", halfNb);
        scanf(" %c", &reponse);
        if (reponse == 'o')   a = halfNb + 1;
        else b = halfNb;
        i++;
    }
    if (reponse == 'o') nbSecret = b;
    else nbSecret = a;
    printf("Le nombre secret qu'on a trouvé est : %d \n", nbSecret);

    return 0;
}

int rand_a_b(int a, int b)
{

    return rand()%(b-a) +a;
}

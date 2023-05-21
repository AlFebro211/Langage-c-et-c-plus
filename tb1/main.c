#include <stdio.h>
#include <stdlib.h>

int main()
{
int Notes [10];
int i;
for (i = 0; i < 10; i++) /* Remplissage du tableau */
{
printf ("Entrez la note de l ’étudiant N° %d\n", i+1 );
scanf ("%d", &Notes[i]);
}

    return 0;
}

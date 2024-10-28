#include <stdio.h>
#include <stdlib.h>

typedef struct{
char nom[15];
int age;
struct{
char rue[20];
char ville[10];
int cdPostal;
} adress
}personne;

void supprimer_personne(personne* t, int* n, int i) {
    if (i < 0 || i >= *n) {
        printf("Index invalide.\n");
        return;
    }

    for (int i = 0; i < *n - 1; i++) {
        t[i] = t[i + 1];
    }
    (*n)--;
}


int main()
{
    int n,indice;
    int i;
    printf("quel est le nombre des personne que vous voulez entrer: \n");
    scanf("%d",&n);
    personne t[n];
    for(i=0; i<n; i++){
    printf("entrer le nom: ");
    scanf("%s",t[i].nom);
    printf("entre l'age: ");
    scanf("%d",&t[i].age);
    printf("entrer la ville: ");
    scanf("%s",t[i].adress.ville);
    printf("entrer la rue: ");
    scanf("%s",t[i].adress.rue);
    printf("entre le code postal: ");
    scanf("%d",&t[i].adress.cdPostal);

    }
    printf("information des personnes: \n");
    for(i=0; i<n; i++){

    printf("nom : %s \n",t[i].nom);
    printf("age: %d \n",t[i].age);
    printf("rue: %s \n",t[i].adress.rue);
    printf("ville: %s \n",t[i].adress.ville);
    printf("cdPostal: %d\n",t[i].adress.cdPostal);

    }
    printf("taper le nombre du personne qui tu veux modifier\n");
        printf("personne : ");
        scanf("%d",&indice);
        printf("taper le nom :");
        scanf("%s",t[indice-1].nom);
        printf("saisir l'age : ");
        scanf("%d",&t[indice-1].age);
        printf("saisir la rue : ");
        scanf("%s",t[indice-1].adress.rue);
        printf("saisir la ville : ");
        scanf("%s",t[indice-1].adress.ville);
        printf("saisir le code postal : ");
        scanf("%d",&t[indice-1].adress.cdPostal);

         printf("modification : \n");
    for(i=0; i<n; i++){

    printf("nom : %s \n",t[i].nom);
    printf("age: %d \n",t[i].age);
    printf("rue: %s \n",t[i].adress.rue);
    printf("ville: %s \n",t[i].adress.ville);
    printf("cdPostal: %d\n",t[i].adress.cdPostal);

    }


 int index;
    printf("Tapez le numéro de la personne que vous voulez supprimer (1 à %d) : ", n);
    scanf("%d", &index);
    supprimer_personne(t, &n, index - 1);






 return 0;
}

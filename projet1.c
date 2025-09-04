#include <stdio.h>

int main() {
   int tailltab;
   do{
    printf("entrez le nombre des etudiant:\n");
    scanf("%d",&tailltab);}while(tailltab<0 || tailltab>30);
    int tabE[tailltab];
    for(int i=0;i<tailltab;i++){
        printf("Saisir la not de l etudiant %d:",i+1);
        scanf("%d",&tabE[i]);}

    return 0;
}
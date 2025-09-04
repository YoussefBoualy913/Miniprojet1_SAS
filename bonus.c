
#include <stdio.h>

int main() {
    int  tailltab;
   float moyenEtudiant,moyenMatiere;
   do{
    printf("entrez le nombre des étudiant:\n");
    scanf("%d",&tailltab);}while(tailltab<0 || tailltab>30);
    int tabE[tailltab][3];
    for(int i=0;i<tailltab;i++){
        for(int j=0;j<3;j++){
        printf("Saisir la note %d de l'étudiant %d:",j+1,i+1);
        scanf("%d",&tabE[i][j]);}
    }
    int som2=0;
    for(int i=0;i<tailltab;i++){
         int som1=0;
        for(int j=0;j<3;j++){
         som1+=tabE[i][j];
    }
    moyenMatiere=som1/3;
    printf("la Moyenne de l'étudiant %d est:%.2f\n",i+1,moyenMatiere);
    som2+=moyenMatiere;
    }   
    printf("la Moyenne génerale des étudiant est:%.2f\n",moyenMatiere);
    return 0;
}
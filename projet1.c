
#include <stdio.h>


float calculerMoyenne(int notes[], int n){
    int som=0;
    for(int i=0 ;i<n;i++){
        som+=notes[i];
    }
    return som/n;
}
int trouverMax(int notes[], int n){
    int max=notes[0];
    for(int i=0 ;i<n;i++){
        if(notes[i]>max){
            max=notes[i];
        }
    }
    return max;
}
int trouverMin(int notes[], int n){
     int min=notes[0];
    for(int i=0 ;i<n;i++){
        if(notes[i]<min){
            min=notes[i];
        }
    }
    return min;
}
int compterReussites(int notes[], int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(notes[i]>=10){
            c++;
        }
    }
    return c;
}
int main() {
   int  tailltab,Max,Min,Nobrederussit;
   float moyen;
   do{
    printf("entrez le nombre des etudiant:\n");
    scanf("%d",&tailltab);}while(tailltab<0 || tailltab>30);
    int tabE[tailltab];
    for(int i=0;i<tailltab;i++){
        printf("Saisir la not de l etudiant %d:",i+1);
        scanf("%d",&tabE[i]);}
        moyen=calculerMoyenne(tabE,tailltab);
        Max=trouverMax(tabE,tailltab);
        Min=trouverMin(tabE,tailltab);
        Nobrederussit=compterReussites(tabE,tailltab);
    printf("Le Moyenne:%.2f\n",moyen);
    printf("le Maximmum:%d\n",Max);
    printf("le Minimmum:%d\n",Min);
    printf("le nombre de ressites:%d\n",Nobrederussit);
return 0;
}
    

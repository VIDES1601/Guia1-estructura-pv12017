#include<stdio.h>

int main(){
	
	int i=0,j=0,suma=0,tamano=0;
	
	printf("INGRESE TAMANHO DE MATRI NxN --> ");
	scanf("%d",&tamano);
	int matriz [tamano][tamano];
	
	for(i=0;i<tamano;i++){
	for(j=0;j<tamano;j++){
    printf("ingrese el valor (%d,%d) -->",i+1,j+1);
    scanf("%d",&matriz[i][j]); 
    }}
	
 /* impriecion de matriz*/
  printf("\n");
  for(i=0;i<tamano;i++){
      for(j=0;j<tamano;j++){
          printf("  %d  ", matriz[i][j]);
      }
      printf("\n");
      }
	printf("\n\n");
	
	
	
	
	/*Diagonal principal*/
	for(i=0;i<tamano;i++){
	for(j=0;j<tamano;j++){
    if(i==j){
     suma=suma+matriz[i][j];
     }
    }}
	printf("la suma del adiagonal principal es --> %d",suma);
	printf("\n\n");
	
	/*Diagonal secundaria*/
	suma=0;
	for(i=0;i<tamano;i++){
	for(j=0;j<tamano;j++){
    if(i+j==tamano-1){
     suma=suma+matriz[i][j];
     }
    }}
	printf("la suma del adiagonal secunadari es --> %d",suma);
	
	return 0;
	
	}

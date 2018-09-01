#include<stdio.h>

int main(){
	
	int fil,col,i,j;

  printf("Numero de filas de la matriz  1:");
  scanf("%d", &fil);
  printf("Numero de columnas de la matriz 1:");
  scanf("%d", &col);
	printf("\n\n");
  printf("\n\n");
  int numeros[fil][col];
  
  for(i=0;i<fil;i++){
  for(j=0;j<col;j++){  
	  printf("ingrese pocicion(%d,%d):",i+1,j+1);
	  scanf("%d",&numeros[i][j]);
	  }}
	  
	  printf("\n\n");
	  printf("MATRIZ ORIGINAL\n\n");
	  for(i=0;i<fil;i++){
      for(j=0;j<col;j++){  
	  printf("%d",numeros[i][j]);
	   }
	  printf("\n");
	   }
	  
	  printf("\n\n");
	  printf("MATRIZ cCAMBIADA\n\n");
	  	for(i=0;i<fil;i++){
      for(j=0;j<col;j++){  
	  printf("%d",numeros[j][i]);
	   }
	  printf("\n");
	   }
	  return 0;
	}

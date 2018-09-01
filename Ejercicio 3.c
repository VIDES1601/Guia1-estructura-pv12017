# include<stdio.h>
# include<stdlib.h>

int main(){
	int i=0,opc,dato,pos,tam;
	
	printf("Ingrese Tamaño de Vector:");
	scanf("%d",&tam);
	int vector [tam];
	
	
	do{	
		
	printf("MENU:\n");
	printf("1.Insertar\n");
	printf("2.Buscar\n");
	printf("3.Editar\n");
	printf("4.Eliminar\n");
	printf("5.Salir\n");
	printf("Elije una opcion:");
	scanf("%d", &opc);	
	printf("\n\n\n");	
		
		switch(opc){
		
		case 1:
		system("cls");
		printf("ingrese pocicion a llenar:");
		scanf("%d",&pos);
		if(pos>tam){
			printf("La Pocicion indicada es mayor que tamoño de vector");
			
			}
       printf("ingrese el dato llenar:");
		scanf("%d",&dato);  	
		vector[pos-1]=dato;
		break;
		
		
		case 2:
		system("cls");
		printf("Digite el numero Buscar:");
		scanf("%d",&dato);
		for(i=0;i<tam;i++){
			if(vector[i]==dato){
				printf("dato encontrado en la pocioion %d",i+1);
			printf("\n\n\n");
				}
			
			}
		break;

		
		
		case 3:
		system("cls");
		printf("que pocion modificara:");
		scanf("%d",&pos);
		if(pos<tam){
			printf("Digite el nuevo dato:");
		    scanf("%d",&dato);
		    vector[pos-1]=dato;
		    printf("dato guardado\n");
			}
			break;
		
		case 4:
		system("cls");		
		printf("que pocicion Eliminara:");
		scanf("%d",&pos);
		if(pos<tam){
		    vector[pos-1]=0;
		    printf("dato eliminado");
		    printf("\n\n\n");
			}
			break;
			
			case 5:
			break;
		
		
		default :
		printf("opcion incorrecta");
		
		}}while(opc !=5);
		
	
	
	
	
	return 0;
	}

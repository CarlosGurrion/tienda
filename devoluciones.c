#include <stdio.h>
void devoluciones(){
	int del,as,rem;
	printf("Que desea devolver%c\n",63);
	for(cont=0;cont<6;cont++){
		printf("%s \n", &P[cont] );
	}
	scanf("%d",&del);
	 switch(del){
	 	case 1:
	 		printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<hue){
	 		hue=hue-as;
	 		rem=35*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }
		 else{
		 	if(as==hue){
		 	printf("producto devuelto\n");
		 	hue=0;
		 	rem=35*as;
		 	acum=acum-rem;
		}	else{
		 	printf("No se puede hacer esta accion :( \n");}
		 }
		 break;
		 case 2:
	 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=gar){
	 		gar=gar-as;
	 		rem=19*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 if(as==gar){
		 	printf("producto devuelto\n");
		 	gar=0;
		 	rem=19*as;
		 	acum=acum-rem;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }}
		 break;
		 case 3:
		 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=pap){
	 		pap=pap-as;
	 		rem=15*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 if(as==pap){
		 	printf("producto devuelto\n");
		 	pap=0;
		 	rem=15*as;
		 	acum=acum-rem;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
	}
		 break;
		 case 4:
		 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=coc){
	 		coc=coc-as;
	 		rem=15*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 if(as==coc){
		 	printf("producto devuelto\n");
		 	coc=0;
		 	rem=35*as;
		 	acum=acum-rem;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
	}
		 break;
		 case 5:
		 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=tor){
	 		tor=tor-as;
	 		rem=35*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }
		 else{
		 if(as==tor){
		 	printf("producto devuelto\n");
		 	tor=0;
		 	rem=35*as;
		 	acum=acum-rem;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
	}
		break;

	 }
}

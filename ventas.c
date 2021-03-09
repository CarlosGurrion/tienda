#include <stdio.h>
void ventas(){
	int y,num=0;
	char pre[4]={35,19,15,15,10};
	char alm[4]={5,10,20,5,5};
	printf("ingrese el numero del producto\n");
	scanf("%d",&y);
	if(1<=y && y<=5){
	switch(y){
		case 1:
			printf(" \n Usted escogio 1Kg de huevo \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			venta=pre[0]*num;
			alm[0]= alm[0]-num;
			if (alm[y] <=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+venta;
				hue=hue+num;
			}
			break;
		case 2:
			printf(" \n Usted escogio el garrafon \n cuantos Garrafones quieres%c\n",63);
			scanf("%d",&num);
			venta =pre[1]*num;
			alm[1]= alm[1]-num;
			if (alm[1] <=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+venta;
				gar=gar+num;
			}
			break;
		case 3:
			printf(" \n Usted escogio papas \n cuantas papas quieres%c\n",63);
			scanf("%d",&num);
			venta = pre[2]*num;
			alm[2]= alm[2]-num;
			if (alm[2] <=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+venta;
				pap=pap+num;
			}
			break;
		case 4:
			printf(" \n Usted escogio coca cola \n cuantas coca colas quieres%c\n",63);
			scanf("%d",&num);
			venta = pre[3]*num;
			alm[3]= alm[3]-num;
			if (alm[3] <=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+venta;
				coc=coc+num;
			}
			break;
		case 5:
			printf(" \n Usted escogio 1Kg de tortilla \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			venta = pre[4]*num;
			alm[4]= alm[4]-num;
			if (alm[4] <0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+venta;
				tor=tor+num;
			}
			break;
	}
}else{
		printf("Respuesta no valida");
	}
	
}

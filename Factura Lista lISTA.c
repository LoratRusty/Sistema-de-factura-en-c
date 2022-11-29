//Material Elaborado por LoratRusty Espero les siva de algo suerte :)


#include<stdio.h> //Devuelve un carácter desde un fichero. Lee caracteres de entrada hasta que encuentra un salto de línea, y los almacena en un único argumento. Usados para imprimir salidas de datos.
#include<stdlib.h> //Contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras.
#include<conio.h>  //Provee un sistema de E/S por consola
#include<string.h> //definición de macros, constantes, funciones y tipos y algunas operaciones de manipulación de memoria.
#include<wchar.h>  //manipular flujos de datos y caracteres anchos
#include<locale.h> //Contiene todo lo referente al formateo de valores numéricos.
#include<windows.h> //Contiene las declaraciones de todas las funciones de la biblioteca Windows API
#include<math.h>   //Operaciones matemáticas básicas



int main() {
setlocale(LC_ALL, "spanish");
	system ("color 90");
		 //BIENVENIDA AL SISTEMA DE FACTURACIÓN 
	printf("\t\t\tBIENVENIDOS AL SISTEMA DE FACTURACIÓN DE 'FERRETERIA BICENTENARIA C.A'");
		printf("\n\t\t\t\t\tElaborado por: Colectivo Estudiante UBA.");
		printf("\n\t\t\t\t\t   Universidad Bicentenaria De Aragua.");
		printf("\n\n\t\t\t\tPor favor proceda a tocar una tecla y seguir las instrucciones.");
		
	getch(); system("clear||cls");system ("color 30");
	//DECLARACIÓN DE VARIABLES (TODO ESTA IGUALADO A 0 YA QUE SI SE NECESITA HACER OTRA FACTURA SE REINICIA EL SISTEMA) 
	inicio:
		system ("color 30");
	setlocale(LC_ALL, "spanish");
	int a,metodo=0,metododocumento=0,cedula=0, opc_compra=0,prod1=0,prod2=0,prod3=0,prod4=0,prod5=0,prod6=0,prod7=0,prod8=0,prod9=0,prod10=0,prod11=0,prod12=0,prod13=0,prod14=0,prod15=0,prod16=0,prod17=0,prod18=0,prod19=0,prod20=0;
	float acum_precio=0, total_precio=0, total_iva=0, total_precioiva=0,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0,p11=0,p12=0,p13=0,p14=0,p15=0,p16=0,p17=0,p18=0,p19=0,p20=0;
	float VUELTO=0,FALTANTE=0,pago=0;
	char producto[50],producto2[50],nombre[50];
	float precios_COMPRA[20]={80.00,100.00,300.00,3.00,30.00,20.00,400.00,12.00,20.00,500.00,50.00,20.00,7.00,5.00,5.00,10.00,10.00,5.00,30.00,3.00};
 		
		 
	     		//PARA INGRESAR LA CEDULA DEL CLIENTE Y TIPO DE DOCUMENTO
	 	cedula:
	 		 		printf("Por favor indique un tipo de documento\n(1)Rif,(2)Venezolano,(3)Extranjero\n\nIntroduzca la opción deseada y luego presione una enter para continuar\n");
			scanf("%i",&metododocumento);
			if (metododocumento==0 || metododocumento>3){
				printf ("\a\nERROR: Ingreso una opción invalida.\nPor favor presione una tecla para continuar.");
				getch();system("clear||cls");
				goto cedula;
			}
			system("clear||cls");	
		 printf("Ingrese el número de cédula/Rif del cliente:\n");
		  scanf("%i",&cedula); 
		  	  // SI INGRESA UNA CEDULA MENOR A 0
		 	 
			  if (cedula <= 0){
			  printf("\aERROR: Ingresó una cédula inválida. \nPresione una tecla para continuar.\n"); 
			  getch();system("clear||cls");
			  goto cedula;
			  } 
			 system("clear||cls");system ("color 70");
			  
				//INGRESAR NOMBRE DEL CLIENTE 
		
				fflush(stdin);
				printf("Ingresa los nombres y apellidos del cliente: (Solo letras)\n");
                scanf("%[^\n]",nombre);
                fflush(stdin);
				 
 
			       system("clear||cls");system ("color 90");
			 
			  //LISTA DE PRODUCTOS CON PRECIO 
			  system ("color 0F");
	do{
	
			printf("\n*/~/~/~/~/~/~Estos son nuestros productos (Sin IVA)~/~/~/~/~/~/~*\n");
			printf("*\t\t\t\t\t\t\t\t*");
			printf("\n*\t1.- Taladro      \t\t\t80$\t\t*\n");
			printf("*\t2.- Esmeril      \t\t\t100$\t\t*\n");
			printf("*\t3.- Motosierra      \t\t\t300$\t\t*\n");
			printf("*\t4.- Destornillador      \t\t3$\t\t*\n");
			printf("*\t5.- Juego de Llaves      \t\t30$\t\t*\n");
			printf("*\t6.- Electrodo (Paquete)      \t\t20$\t\t*\n");
			printf("*\t7.- Soldadora      \t\t\t400$\t\t*\n");
			printf("*\t8.- Llave de Tubo      \t\t\t12$\t\t*\n");
			printf("*\t9.- Silicón      \t\t\t20$\t\t*\n");
			printf("*\t10.- Generador Eléctrico      \t\t500$\t\t*\n");
			printf("*\t11.- Carretila      \t\t\t50$\t\t*\n");
			printf("*\t12.- Pintura      \t\t\t20$\t\t*\n");
			printf("*\t13.- Cemento      \t\t\t7$\t\t*\n");
			printf("*\t14.- Pego      \t\t\t\t5$\t\t*\n");
			printf("*\t15.- Cal      \t\t\t\t5$\t\t*\n");
			printf("*\t16.- Martillo      \t\t\t10$\t\t*\n");
			printf("*\t17.- Cautín      \t\t\t10$\t\t*\n");
			printf("*\t18.- Cinta Métrica      \t\t5$\t\t*\n");
			printf("*\t19.- Botas de Seguridad (Punta Hierro)  30$\t\t*\n");
			printf("*\t20.- Lentes de Seguridad      \t\t3$\t\t*\n");
			printf("*\t\t\t\t\t\t\t\t*\n");
			printf("*~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~*\n");
			printf("\n\n Introduzca el número del producto que desee adquirir y presione enter.\n Al finalizar su compra, introduzca 0 y presione enter.\n");
			scanf("%i",&opc_compra);
			system("clear||cls");system ("color 0F");
			//AQUI INDICA ELECCION DEL USUARIO PARA LOS 20 CASOS (PRODUCTOS)
			switch(opc_compra){
				case 1:
					printf("Escojiste el Taladro.\n");
					prod1=prod1+1;
				break;
 
				case 2:
					printf("Escojiste el Esmeril.\n");
					prod2=prod2+1;
				break;
 
				case 3:
					printf("Escojiste la Motosierra.\n");
					prod3=prod3+1;
				break;
 
				case 4:
					printf("Escojiste el Destornillador.\n ");
					prod4=prod4+1;
				break;
 
				case 5:
					printf("Escojiste el Juego de Llaves.\n");
					prod5=prod5+1;
				break;
 
				case 6:
					printf("Escojiste el Electrodo (Paquete).\n");
					prod6=prod6+1;
				break;
 
				case 7:
					printf("Escojiste la Soldadora.\n");
					prod7=prod7+1;
				break;
 
				case 8:
					printf("Escojiste la Llave de Tubo.\n");
					prod8=prod8+1;
				break;
 
				case 9:
					printf("Escojiste el Silicón.\n");
					prod9=prod9+1;
				break;
				
				case 10:
					printf("Escojiste el Generador Eléctrico .\n");
					prod10=prod10+1;	
				break;
				
				case 11:
					printf("Escojiste la Carretilla.\n");
					prod11=prod11+1;
				break;
				
				case 12:
					printf("Escojiste la Pintura.\n");
					prod12=prod12+1;
				break;
				
				case 13:
					printf("Escojiste el Cemento.\n");
					prod13=prod13+1;
				break;
				
				case 14:
					printf("Escojiste el Pego.\n");
					prod14=prod14+1;
				break;
				
				case 15:
					printf("Escojiste el Cal.\n");
					prod15=prod15+1;
				break;
				
				case 16:
					printf("Escojiste el Martillo.\n");
					prod16=prod16+1;
				break;
				
				case 17:
					printf("Escojiste el Cautín.\n");
					prod17=prod17+1;
				break;
				
				case 18:
					printf("Escojiste la Cinta Métrica.\n");
					prod18=prod18+1;
				break;
				
				case 19:
					printf("Escojiste las Botas de Seguridad.\n");
					prod19=prod19+1;
				break;
				
				case 20:
					printf("Escojiste los Lentes de Seguridad.\n");
					prod20=prod20+1;
				break;
			}//AQUI ESPECIFICA CALCULOS DE LOS MONTOS ELEGIDOS Y TIENE UN FILTRO QUE NO DEJA AL USUARIO ELEGIR UN NUMERO ENCIMA DE 20
			if(opc_compra!= 0 && opc_compra<=20){
			printf("Precio actual: %.2f$\n",precios_COMPRA[opc_compra-1]);
			acum_precio= precios_COMPRA[opc_compra-1];
			total_precio=total_precio+acum_precio;
			total_iva=total_precio*0.16;
			total_precioiva=total_iva+total_precio;
			printf("Total: %.2f$\n",total_precio,total_iva,total_precioiva);
			}
			//RESUMEN DE LA COMPRA INDICA MONTOS FINALES, METODO DE PAGO 
		}while(opc_compra!=0);
		pago:
			
        printf("Resumen de la compra:");
		printf("\n\n\nBase imponible: \t%.2f$\nIva(16%%): \t\t%.2f$\nTotal: \t\t\t%.2f$\n",total_precio,total_iva,total_precioiva);
		printf("\n\n¿Cómo va a cancelar? \n(1)Efectivo o (2)Tarjeta\nIntroduzca una opción y precione enter\n");
		scanf("%i",&metodo);
		//EN CASO QUE SEA EL METODO DE EFECTIVO EFECTUA TODOS LOS CALCULOS NECESARIOS
		 if (metodo == 1){
	  		
		printf("\n\n\nIntroduzca el dinero entregado: ");
		scanf("%f",&pago);
		if(pago>total_precioiva){
			VUELTO=pago-total_precioiva;
			
			printf("\n\n\nEl devuelto a entregar es de: %.2f$",VUELTO);
			getch();system("clear||cls");system ("color 70");
			goto factura;
			}
			//SI EL PAGO EN EFECTIVO ES MENOR AL TOTAL 
				else if(pago<total_precioiva){
				FALTANTE=total_precioiva-pago;
				printf("\n Lo sentimos, su compra no pudo ser procesada\n\n Hacen falta %.2f$ para completar el pago.",FALTANTE);
				getch(); system("clear||cls");
				goto reintentar;
				}
			
			}  
			 else if (metodo == 2){
			 	system("clear||cls");
			 	system ("color 70");
				goto factura;
			}
			 else if (metodo>2 || metodo==0) {
				printf("\aERROR: No eligio la opción correcta, por favor intente de nuevo.\n\nPresione una tecla para continuar.\n");
				getch(); system("clear||cls");
				goto pago;
			}
			
			
				//VENTANA DE GRACIAS POR SU PREFERENCIA LUEGO MUESTRA FACTURA
			factura:
				
			printf("\n\t\t\t\t\t ¡Gracias por preferirnos!");
			printf("\n\t\t\t Se procederá a mostrar su factura en pantalla. Por favor pulse una tecla...");
			
			getch(); system("clear||cls");system ("color 90");
			
			//PARA MOSTRARLA EN PANTALLA LA FACTURA
			
			printf("\n\t\t\t\t\t\tFERRETERIA BICENTENARIA C.A");
			printf("\n\t\t\t\t\t\t   Rif J-516700438");
			printf("\n\t\t\t========================================================================");
			printf("\n\t\t\tNOMBRE: %s",nombre);
			if (metododocumento==1){
				printf("\n\t\t\tRIF: J-%i",cedula);
			} else if (metododocumento==2) {
				printf("\n\t\t\tCÉDULA: V-%i",cedula);
			} else {
				printf("\n\t\t\tCÉDULA: E-%i",cedula);
			}
			printf("\n\t\t\tPRODUCTOS: ");
			
				if (prod1>0){
					p1=prod1*80;
				printf("\n\t\t\t\tTaladro x%i       \t\t\t\t%.2f$",prod1,p1);
			}
				if (prod2>0){
					p2=prod2*100;
				printf("\n\t\t\t\tEsmeril x%i       \t\t\t\t%.2f$",prod2,p2);
			}
				if (prod3>0){
					p3=prod3*300;
				printf("\n\t\t\t\tMotosierra x%i       \t\t\t\t%.2f$",prod3,p3);
			}
				if (prod4>0){
					p4=prod4*3;
				printf("\n\t\t\t\tDestornillador x%i       \t\t\t%.2f$",prod4,p4);
			}
				if (prod5>0){
					p5=prod5*30;
				printf("\n\t\t\t\tJuego de Llaves x%i       \t\t\t%.2f$",prod5,p5);
			}
				if (prod6>0){
					p6=prod6*20;
				printf("\n\t\t\t\tElectrodo (Paquete) x%i       \t\t\t%.2f$",prod6,p6);
			}
				if (prod7>0){
					p7=prod7*400;
				printf("\n\t\t\t\tSoldadora x%i       \t\t\t\t%.2f$",prod7,p7);
			}
				if (prod8>0){
					p8=prod8*12;
				printf("\n\t\t\t\tLlave de Tubo x%i       \t\t\t\t%.2f$",prod8,p8);
			}
				if (prod9>0){
					p9=prod9*20;
				printf("\n\t\t\t\tSilicón x%i       \t\t\t\t%.2f$",prod9,p9);
			}
				if (prod10>0){
					p10=prod10*500;
				printf("\n\t\t\t\tGenerador Eléctrico x%i       \t\t\t%.2f$",prod10,p10);
			}
				if (prod11>0){
					p11=prod11*50;
				printf("\n\t\t\t\tCarretila x%i       \t\t\t\t%.2f$",prod11,p11);
			}
				if (prod12>0){
					p12=prod12*20;
				printf("\n\t\t\t\tPintura x%i       \t\t\t\t%.2f$",prod12,p12);
			}
				if (prod13>0){
					p13=prod13*7;
				printf("\n\t\t\t\tCemento x%i       \t\t\t\t%.2f$",prod13,p13);
			}
				if (prod14>0){
					p14=prod14*5;
				printf("\n\t\t\t\tPego x%i       \t\t\t\t\t%.2f$",prod14,p14);
			}
				if (prod15>0){
					p15=prod15*5;
				printf("\n\t\t\t\tCal x%i       \t\t\t\t\t%.2f$",prod15,p15);
			}
				if (prod16>0){
					p16=prod16*10;
				printf("\n\t\t\t\tMartillo x%i       \t\t\t\t%.2f$",prod16,p16);
			}
				if (prod17>0){
					p17=prod17*10;
				printf("\n\t\t\t\tCautín x%i       \t\t\t\t%.2f$",prod17,p17);
			}
				if (prod18>0){
					p18=prod18*5;
				printf("\n\t\t\t\tCinta Métrica x%i       \t\t\t\t%.2f$",prod18,p18);
			}
				if (prod19>0){
					p19=prod19*30;
				printf("\n\t\t\t\tBotas de Seguridad (Punta Hierro) x%i       \t%.2f$",prod19,p19);
			}
				if (prod20>0){
					p20=prod20*3;
				printf("\n\t\t\t\tLentes de Seguridad x%i       \t\t\t%.2f$",prod20,p20);
			}
			if (metodo == 1){
			printf("\n\t\t\tMÉTODO DE PAGO:       \t\t\t\t\tEfectivo");
		} 
		else{
			printf("\n\t\t\tMÉTODO DE PAGO:       \t\t\t\t\tTarjeta");
		}
			printf("\n\t\t\tBASE IMPONIBLE:       \t\t\t\t\t%.2f",total_precio);
			printf("\n\t\t\tIVA 16%%:       \t\t\t\t\t\t%.2f",total_iva);
			printf("\n\t\t\tTOTAL A PAGAR:       \t\t\t\t\t%.2f",total_precioiva);
			printf("\n\t\t\t========================================================================");
			printf("\n\t\t\t\t     Por favor pulse una tecla para continuar.");
		  getch();	
		  system("clear||cls");
		  
		  printf(" \n\t\t\t\t\tImprimiendo documento.\n\t\t\t\t Por favor pulse una tecla para continuar.");
			
		  getch();	
		  
			
			//PARA IMPRIMIR FACTURA (Crear un archivo .txt donde este el ejecutable)
			//Aqui para evaluar por cual numero de factura va del 1 - 10  
			a=a+1;
			
			FILE *archivo;
			
			if (a==1) {
			goto factura1;
			
			} else if (a==2) {	
			goto factura2;
		
			}else if (a==3) {
			goto factura3;
			
			} else if (a==4) {
			goto factura4;
			
			} else if (a==5) {
			goto factura5;
			
			} else if (a==6) {
			goto factura6;
			
			} else if (a==7) {
			goto factura7;
			
			} else if (a==8) {
			goto factura8;
			
			} else if (a==9) {
			goto factura9;
			
			} else if (a==10) {
			goto factura10;
			
			}
		//En caso de cada una lleva a la creacion de un .txt distinto 
			factura1:
			(archivo=fopen ("Factura1.txt","w"));
			goto impresion;
			
			factura2:
			(archivo=fopen ("Factura2.txt","w"));
			goto impresion;
			
			factura3:
			(archivo=fopen ("Factura3.txt","w"));
			goto impresion;
			
			factura4:
			(archivo=fopen ("Factura4.txt","w"));
			goto impresion;
			
			factura5:
			(archivo=fopen ("Factura5.txt","w"));
			goto impresion;
			
			factura6:
			(archivo=fopen ("Factura6.txt","w"));
			goto impresion;
			
			factura7:
			(archivo=fopen ("Factura7.txt","w"));
			goto impresion;
			
			factura8:
			(archivo=fopen ("Factura8.txt","w"));
			goto impresion;
			
			factura9:
			(archivo=fopen ("Factura9.txt","w"));
			goto impresion;
			
			factura10:
			(archivo=fopen ("Factura10.txt","w"));
			goto impresion;
			
			//Para imprimir la informacion del txt (NO TOCAR)
				impresion:
					
			fprintf(archivo,"\n\t\t\t\t\t\tFERRETERIA BICENTENARIA C.A");
			fprintf(archivo,"\n\t\t\t\t\t\t                  Rif J-516700438");
			fprintf(archivo,"\n\t\t\t========================================================================");
			fprintf(archivo,"\n\t\t\tNOMBRE: %s",nombre);
			if (metododocumento==1){
				fprintf(archivo,"\n\t\t\tRIF: J-%i",cedula);
			} else if (metododocumento==2) {
				fprintf(archivo,"\n\t\t\tCÉDULA: V-%i",cedula);
			} else {
				fprintf(archivo,"\n\t\t\tCÉDULA: E-%i",cedula);
			}
			fprintf(archivo,"\n\t\t\tPRODUCTOS: ");
			
				if (prod1>0){
					p1=prod1*80;
				fprintf(archivo,"\n\t\t\t\tTaladro x%i       \t\t\t\t\t%.2f$",prod1,p1);
			}
				if (prod2>0){
					p2=prod2*100;
				fprintf(archivo,"\n\t\t\t\tEsmeril x%i       \t\t\t\t\t%.2f$",prod2,p2);
			}
				if (prod3>0){
					p3=prod3*300;
				fprintf(archivo,"\n\t\t\t\tMotosierra x%i       \t\t\t\t\t%.2f$",prod3,p3);
			}
				if (prod4>0){
					p4=prod4*3;
				fprintf(archivo,"\n\t\t\t\tDestornillador x%i       \t\t\t\t\t%.2f$",prod4,p4);
			}
				if (prod5>0){
					p5=prod5*30;
				fprintf(archivo,"\n\t\t\t\tJuego de Llaves x%i       \t\t\t\t%.2f$",prod5,p5);
			}
				if (prod6>0){
					p6=prod6*20;
				fprintf(archivo,"\n\t\t\t\tElectrodo (Paquete) x%i       \t\t\t\t%.2f$",prod6,p6);
			}
				if (prod7>0){
					p7=prod7*400;
				fprintf(archivo,"\n\t\t\t\tSoldadora x%i       \t\t\t\t\t%.2f$",prod7,p7);
			}
				if (prod8>0){
					p8=prod8*12;
				fprintf(archivo,"\n\t\t\t\tLlave de Tubo x%i       \t\t\t\t\t%.2f$",prod8,p8);
			}
				if (prod9>0){
					p9=prod9*20;
				fprintf(archivo,"\n\t\t\t\tSilicón x%i       \t\t\t\t\t%.2f$",prod9,p9);
			}
				if (prod10>0){
					p10=prod10*500;
				fprintf(archivo,"\n\t\t\t\tGenerador Eléctrico x%i       \t\t\t\t%.2f$",prod10,p10);
			}
				if (prod11>0){
					p11=prod11*50;
				fprintf(archivo,"\n\t\t\t\tCarretila x%i       \t\t\t\t\t%.2f$",prod11,p11);
			}
				if (prod12>0){
					p12=prod12*20;
				fprintf(archivo,"\n\t\t\t\tPintura x%i       \t\t\t\t\t%.2f$",prod12,p12);
			}
				if (prod13>0){
					p13=prod13*7;
				fprintf(archivo,"\n\t\t\t\tCemento x%i       \t\t\t\t\t%.2f$",prod13,p13);
			}
				if (prod14>0){
					p14=prod14*5;
				fprintf(archivo,"\n\t\t\t\tPego x%i       \t\t\t\t\t%.2f$",prod14,p14);
			}
				if (prod15>0){
					p15=prod15*5;
				fprintf(archivo,"\n\t\t\t\tCal x%i       \t\t\t\t\t\t%.2f$",prod15,p15);
			}
				if (prod16>0){
					p16=prod16*10;
				fprintf(archivo,"\n\t\t\t\tMartillo x%i       \t\t\t\t\t%.2f$",prod16,p16);
			}
				if (prod17>0){
					p17=prod17*10;
				fprintf(archivo,"\n\t\t\t\tCautín x%i       \t\t\t\t\t%.2f$",prod17,p17);
			}
				if (prod18>0){
					p18=prod18*5;
				fprintf(archivo,"\n\t\t\t\tCinta Métrica x%i       \t\t\t\t\t%.2f$",prod18,p18);
			}
				if (prod19>0){
					p19=prod19*30;
				fprintf(archivo,"\n\t\t\t\tBotas de Seguridad (Punta Hierro) x%i       \t\t\t%.2f$",prod19,p19);
			}
				if (prod20>0){
					p20=prod20*3;
				fprintf(archivo,"\n\t\t\t\tLentes de Seguridad x%i       \t\t\t\t%.2f$",prod20,p20);
			}
			if (metodo == 1){
			fprintf(archivo,"\n\t\t\tMÉTODO DE PAGO:       \t\t\t\t\tEfectivo");
		} 
		else{
			fprintf(archivo,"\n\t\t\tMÉTODO DE PAGO:       \t\t\t\t\tTarjeta");
		}
			fprintf(archivo,"\n\t\t\tBASE IMPONIBLE:       \t\t\t\t\t%.2f",total_precio);
			fprintf(archivo,"\n\t\t\tIVA 16%:       \t\t\t\t\t\t%.2f",total_iva);
			fprintf(archivo,"\n\t\t\tTOTAL A PAGAR:       \t\t\t\t\t%.2f",total_precioiva);
			fprintf(archivo,"\n\t\t\t========================================================================");
			system("clear||cls");
			system("color 70");			
			printf ("\n\t\t\t\t\tImpresion Completada.");
			printf("\n\t\t\t\t Por favor pulse una tecla para continuar.");
			getch();	
		  	system("clear||cls");
		    fclose(archivo);
		    //Para Salir del sistema de Facturacion
			salir:
			metodo=0;	
			system ("color 0F");
	printf("\n\t\t\tGracias por usar nuestro sistema de facturación.");
	printf("\n\t\t\t\t¿Desea hacer otra factura?");
	printf("\n\t\t\t\t\t(1)Si (2)No\n\t\t\t    Introduzca una opción y presione enter.\n");
	scanf("%i",&metodo);
	if (metodo == 1){
		
		system("clear||cls");
		goto inicio;
	} else if (metodo == 2){
		return 0;
	}		 else if (metodo>2 || metodo==0) {
				printf("\aERROR: No eligio la opción correcta, por favor intente de nuevo.\n\nPresione una tecla para continuar.\n");
				getch(); system("clear||cls");
				goto salir;
			}
			
			//En el caso de efectivo recibido es menor al total pregunta si desea retomar la factura o iniciar de nuevo
		  reintentar:
			metodo=0;	
			
	printf("\n\t\t\t\t¿Desea retomar la factura factura o hacer una nueva?");
	printf("\n\t\t\t\t\t(1)Retomar factura (2)Hacer nueva\n\t\t\t\t       Introduzca una opción y presione enter.\n");
	scanf("%i",&metodo);
	if (metodo == 1){
		
		system("clear||cls");
		goto pago;
	} else if (metodo == 2){
		system("clear||cls");
		system ("color 90");
		goto inicio;
	}		 else if (metodo>2 || metodo==0) {
				printf("\aERROR: No eligio la opción correcta, por favor intente de nuevo.\n\nPresione una tecla para continuar.\n");
				getch(); system("clear||cls");
				goto reintentar;
			}
		  
		}

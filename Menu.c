#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void suma(int a[40][40], int b[40][40], int filas, int columnas) {  //funcion suma
	int sumar[filas][columnas], x, y;  
	//calcula suma 
	for(x=0;x<filas;x++){     
		for(y=0;y<columnas;y++){
			sumar[x][y] = a[x][y] + b[x][y];
		}
	}
	//imprime la matriz
	for(x=0;x<filas;x++){
		printf("|");
		for(y=0;y<columnas;y++){
			printf("\%2d ",sumar[x][y]);
		}
		printf("|\n");
		printf("\n");
	}
	
}
void restar(int a[40][40], int b[40][40], int filas, int columnas) {    //funcion resta
	int resta[filas][columnas], x, y;
	for(x=0; x<filas; x++) {
		for(y=0; y<columnas; y++) {
			resta[x][y] = a[x][y] - b[x][y];
		}
	}
	for(x=0; x<filas; x++) {
		printf("|");
		for(y=0; y<columnas; y++) {
			printf("\%4d", resta[x][y]);
		}
		printf("|\n");
		printf("\n");
	}
}
void pirinola(int w) { //funcion pirinola
	switch(w) {
		case 1: {
			printf("\n   ^  ");
		    printf("\n  | |  ");
			printf("\n+-----+");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|  P  |");
			printf("\n|  o  |");
			printf("\n|  n  |");
			printf("\n|  1  |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n+-----+");
			printf("\n  |_| " );
			printf("\n   v ");
			
			break;
		}
		case 2: {
			printf("\n   ^  ");
		    printf("\n  | |  ");
			printf("\n+-----+");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|  P  |");
			printf("\n|  o  |");
			printf("\n|  n  |");
			printf("\n|  2  |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n+-----+");
		    printf("\n  |_| " );
			printf("\n   v ");
			break;
		}
		case 3: {
			printf("\n   ^  ");
		    printf("\n  | |  ");
			printf("\n+-----+");
			printf("\n|     |");
			printf("\n|  T  |");
			printf("\n|  o  |");
			printf("\n|  m  |");
			printf("\n|  a  |");
			printf("\n|  1  |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n+-----+");
			printf("\n  |_| " );
			printf("\n   v ");
			break;
		}
		case 4: {
			printf("\n   ^  ");
		    printf("\n  | |  ");
			printf("\n+-----+");
			printf("\n|     |");
			printf("\n|  T  |");
			printf("\n|  o  |");
			printf("\n|  m  |");
			printf("\n|  a  |");
			printf("\n|  2  |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n+-----+");
	 	    printf("\n  |_| " );
			printf("\n   v ");
			break;
		}
		case 5: {
			printf("\n   ^  ");
		    printf("\n  | |  ");
			printf("\n+-----+");
			printf("\n|  T  |");
			printf("\n|  o  |");
			printf("\n|  m  |");
			printf("\n|  a  |");
			printf("\n|  T  |");
			printf("\n|  o  |");
			printf("\n|  d  |");
			printf("\n|  o  |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n+-----+");
			printf("\n  |_| " );
			printf("\n   v ");
			break;
		}
		case 6: {
			printf("\n   ^  ");
		    printf("\n  | |  ");
			printf("\n+-----+");
			printf("\n|     |");
			printf("\n|  T  |");
			printf("\n|  o  |");
			printf("\n|  d  |");
			printf("\n|  o  |");
			printf("\n|  s  |");
			printf("\n|  p  |");
			printf("\n|  o  |");
			printf("\n|  n  |");
			printf("\n|  e  |");
			printf("\n|  n  |");
			printf("\n+-----+");
			printf("\n  |_| " );
			printf("\n   v ");
			break;
		}
		default : {
			
			break;
		}
	}
}
void movimiento(void) {
	int m, n;
    printf("\n   ^  ");
    printf("\n  | |  ");
    printf("\n+-----+");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n|  P  |");
	printf("\n|  o  |");
	printf("\n|  n  |");
	printf("\n|  2  |");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n+-----+");
	printf("\n  |_| " );
	printf("\n   v ");
	for(m=0; m<5500; m++) 
		for(n=0; n<9000; n++); //esto hace un retardo
	        system("cls");
		    printf("\n   ^  ");
		    printf("\n  | |  ");
			printf("\n+-----+");
			printf("\n|     |");
			printf("\n|  T  |");
			printf("\n|  o  |");
			printf("\n|  d  |");
			printf("\n|  o  |");
			printf("\n|  s  |");
			printf("\n|  p  |");
			printf("\n|  o  |");
			printf("\n|  n  |");
			printf("\n|  e  |");
			printf("\n|  n  |");
			printf("\n+-----+");
			printf("\n  |_| " );
			printf("\n   v ");
	        for(m=0; m<5500; m++)
		        for(n=0; n<9000; n++); //esto hace un retardo
	                system("cls");
		            printf("\n   ^  ");
		            printf("\n  | |  ");
			        printf("\n+-----+");
			        printf("\n|  T  |");
			        printf("\n|  o  |");
			        printf("\n|  m  |");
			        printf("\n|  a  |");
			        printf("\n|  T  |");
			        printf("\n|  o  |");
			        printf("\n|  d  |");
			        printf("\n|  o  |");
			        printf("\n|     |");
			        printf("\n|     |");
			        printf("\n+-----+");
			        printf("\n  |_| " );
			        printf("\n   v ");
	                for(m=0;m<5500;m++)
		                for(n=0; n<9000; n++); //esto hace un retardo
	                        system("cls");
}
void dado(int u) {
	switch(u) {
		case 1: {
			printf("\n+-----+");
		    printf("\n|     |");
			printf("\n|  *  |");
			printf("\n|     |");
			printf("\n+-----+");
			break;
		}
		case 2: {
			printf("\n+-----+");
		    printf("\n|*    |");
			printf("\n|     |");
			printf("\n|    *|");
			printf("\n+-----+");
			break;
		}
		case 3: {
			printf("\n+-----+");
		    printf("\n|*    |");
			printf("\n|  *  |");
			printf("\n|    *|");
			printf("\n+-----+");
			break;
		}
		case 4: {
			printf("\n+-----+");
		    printf("\n|*   *|");
			printf("\n|     |");
			printf("\n|*   *|");
			printf("\n+-----+");
			break;
		}
		case 5: {
			printf("\n+-----+");
		    printf("\n|*   *|");
			printf("\n|  *  |");
			printf("\n|*   *|");
			printf("\n+-----+");
			break;
		}
		case 6: {
			printf("\n+-----+");
		    printf("\n|*   *|");
			printf("\n|*   *|");
			printf("\n|*   *|");
			printf("\n+-----+");
			break;
		}
	}
}
void mover(void) {
	int k, r;
	printf("\n+-----+");
    printf("\n|     |");
	printf("\n|  *  |");
	printf("\n|     |");
	printf("\n+-----+");
	for(k=0; k<5500; k++)
		for(r=0; r<9000; r++);  //crea retardo
		    system("cls");
		    printf("\n+-----+");
		    printf("\n|*    |");
			printf("\n|  *  |");
			printf("\n|    *|");
			printf("\n+-----+");
			for(k=0; k<5500; k++)
		        for(r=0; r<9000; r++);
		            system("cls");
		            printf("\n+-----+");
		            printf("\n|*   *|");
			        printf("\n|*   *|");
			        printf("\n|*   *|");
			        printf("\n+-----+");
			        for(k=0; k<5500; k++)
		                for(r=0; r<9000; r++); 
	                        system("cls");
}
int main(int argc, char *argv[]) {
	int f1, c1, f2, c2, m1[40][40], m2[40][40], m_Producto[40][40], x, y, z;
	int matriz1[40][40], matriz2[40][40];
	int filas, columnas, i, j;
	int opcion, juego, matematicas;
	int q;
	int g, aleatorio1, aleatorio2, puntaje;
	do {
		printf("\nMenu");
		printf("\n\nIngrese una opcion: ");
		printf("\n(1=Juegos)(2=Matematicas)(3=Creditos)(4=Limpieza)(5=Salir): ");
		scanf("%d", &opcion);
		switch(opcion) {
			case 1: {
				do {
					printf("\nJuegos\n");
					printf("\nElija un juego: ");
					printf("\n(1=Pirinola)(2=Dados)(3=Limpieza)(4=Regresar a menu principal):");
					scanf("%d", &juego);
					switch(juego) {
						case 1: {
							srand(time(NULL));
							printf("\nLA PIRINOLA");
							printf("\nIngrese el numero 1 o 0 para jugar(-1 para salir): ", 1);
	                        scanf("%d", &q);
	                        while(q!=-1) {
		                            if(q==1||q==0) {
		                               movimiento();
	                                   pirinola(rand()%6+1);
	                                }
	                                else {
		                                printf("\nIngrese el numero valido");
	                                }  
	                                printf("\n\nIngrese el numero 1 o 0 para jugar(-1 para salir): ", 1);
	                                scanf("%d", &q);
	                        }
							break;
						}
						case 2: {
							srand(time(NULL));
							printf( "\n  JUEGO DE DADOS"); 
	                        printf("\nIngrese un numero del 1 al 5 para jugar(-1 para salir): ", 1);
	                        scanf("%d", &g);
	                        while(g!=-1) {
		                        if(g==1||g==2||g==3||g==4||g==5) {
			                        mover();
			
	                                aleatorio1= 1 + rand() % ((6+1) -1);
	                                aleatorio2= 1 + rand() % ((6+1) -1);
	                                printf("El valor del dado 1 es: %d",aleatorio1);
	                                printf("\n");
	                                printf("El valor del dado 2 es: %d",aleatorio2);
	                                dado(aleatorio1);
	                                dado(aleatorio2);
	        
	                                puntaje=aleatorio1+aleatorio2;
	                                printf("\n");
	                                if(puntaje==7 || puntaje ==11){
	                                    printf("Felicidades!!");
	                                }
	                                else if(puntaje ==2||puntaje==3||puntaje==12){
		                                printf("Perdiste");
	                                }
	                                else printf("Tienes un punto");
		                        } 
		                        else {
			                        printf("\nIngrese un numero valido");
		                        }
	                            printf("\n\nIngrese un numero del 1 al 5 para jugar(-1 para salir): ", 1);
	                            scanf("%d", &g);
	                        }
							break;
						}
						case 3: {
							system("cls");
							break;
						}
						case 4: {
						
							break;
						}
						 
					}
				}while(juego!=4);
				break;
			}
			case 2: {
				do {
				    printf("\nMatematicas\n");
				    printf("\n\nElija una operacion: ");
				    printf("\n(1=Suma)(2=Resta)(3=Multiplicacion)(4=Limpieza)(5=Regresar a menu principal):");
				    scanf("%d", &matematicas);
				    switch(matematicas) {
					    case 1: {
						    printf("\nSUMA\n");
						    printf("Ingrese el numero de filas: ");
	                        scanf("%d", &filas);
	                        printf("\n\nIngrese el numero de columnas: ");
	                        scanf("%d", &columnas);
	
	                       //pide valores dentro de matriz 1
	                        for(i=0; i<filas; i++) {
		                        for(j=0; j<columnas; j++) {
			                        printf("\nIngrese los numeros de la matriz 1 [%d][%d]: ", i+1, j+1);
			                        scanf("%d", &matriz1[i][j]);
		                        }
	                        }
	                        printf("\n\n");
	
	                        //pide valores dentro de matriz 2
	                        for(i=0; i<filas; i++) {
		                        for(j=0; j<columnas; j++) {
			                        printf("\nIngrese los numeros de la matriz 2 [%d][%d]: ", i+1, j+1);
			                        scanf("%d", &matriz2[i][j]);
		                        }
	                        }
	                        printf("\n\n");
	
	                        //Imprime las matrices a sumar
	                        printf("Matriz 1\n\n");
	                        for(i=0; i<filas; i++) {
		                        printf("|");
		                        for(j=0; j<columnas; j++) {
			                        printf("%4d", matriz1[i][j]);
		                        }
		                        printf("|\n");
		                        printf("\n");
	                        }
	                        printf("\n\n");
	                        printf("\nMatriz 2\n\n");
	                        for(i=0; i<filas; i++) {
		                        printf("|");
		                        for(j=0; j<columnas; j++) {
			                        printf("%4d", matriz2[i][j]);
		                        }
		                        printf("|\n");
		                        printf("\n");
	                        }
	                        printf("\n");
	
	                     //resultado de sumar matriz 1 y matriz 2
	                        printf("La suma es:\n\n");
	                        suma(matriz1, matriz2, filas, columnas);
						    break;
					    }
					    case 2: {
						    printf("\nRESTA");
						    printf("\n\nIngrese el numero de filas: ");
	                        scanf("%d", &filas);
	                        printf("\nIngrese el numero de columnas: ");
	                        scanf("%d", &columnas);
	                        for(i=0; i<filas; i++) {
		                        for(j=0; j<columnas; j++) {
			                        printf("\nIngrese los numeros de la matriz 1 [%d][%d]: ", i+1, j+1);
			                        scanf("%d", &matriz1[i][j]);
		                        }
	                        }
	                        printf("\n\n");
	
	                        for(i=0; i<filas; i++) {
		                        for(j=0; j<columnas; j++) {
			                        printf("\nIngrese los numeros de la matriz 2 [%d][%d]: ", i+1, j+1);
			                        scanf("%d", &matriz2[i][j]);
		                        }
	                        }
	                        printf("\n\n");
	                        printf("Matriz 1\n\n");
	                        for(i=0; i<filas; i++) {
		                        printf("|");
		                        for(j=0; j<columnas; j++) {
			                        printf("%4d", matriz1[i][j]);
		                        }
		                        printf("|\n");
		                        printf("\n");
	                        }
	                        printf("\n\n");
	                        printf("\nMatriz 2\n\n");
	                        for(i=0; i<filas; i++) {
		                        printf("|");
		                        for(j=0; j<columnas; j++) {
			                        printf("%4d", matriz2[i][j]);
		                        }
		                        printf("|\n");
		                        printf("\n");
	                        }
	                        printf("\n");
	                        printf("La resta es:\n\n");
	                        restar(matriz1, matriz2, filas, columnas);
						    break;
					    }
					    case 3: {
						    printf("\nMULTIPLICACION");
						    printf("\n\nIngrese el numero de filas de la matriz 1: ");
	                        scanf("%d", &f1);
	                        printf("\nIngrese el numero de columnas de la matriz 1: ");
	                        scanf("%d", &c1);
	                        printf("\nIngrese el numero de filas de la matriz 2: ");
	                        scanf("%d", &f2);
	                        printf("\nIngrese el numero de columnas de la matriz 2: ");
	                        scanf("%d", &c2);
	                        printf("\n\n");
	                        if(c1==f2) {
		                    //Pide valores de matriz 1 y matriz 2//
		                        for(x=0; x<f1; x++) {
			                        for(y=0; y<c1; y++) {
				                        printf("\nIngrese los valores de la matriz 1 [%d][%d]: ", x+1, y+1);
				                        scanf("%d", &m1[x][y]);
			                        }
		                        }
		                        printf("\n");
		                        for(x=0; x<f2; x++) {
			                        for(y=0; y<c2; y++) {
				                        printf("\nIngrese los valores de la matriz 2 [%d][%d]: ", x+1, y+1);
				                        scanf("%d", &m2[x][y]);
			                        }
		                        }
		                    //Multiplicación//
		                        for(x=0; x<f1; x++) {
			                        for(y=0; y<c2; y++) {
				                        for(z=0; z<c1; z++) {
					                        m_Producto[x][y]= (m_Producto[x][y]+ (m1[x][z] * m2[z][y]));
				                        }	
			                        }
		                        }
		                        printf("\n\n");
		                    //imprime matrices 1 y 2
		                        printf("\nMatriz 1");
		                        printf("\n\n");
		                        for(x=0; x<f1; x++) {
			                        printf("|");
			                        for(y=0; y<c1; y++) {
				                        printf("\%4d", m1[x][y]);
			                        }
			                        printf("|\n");
			                        printf("\n");
		                        }
		                        printf("\n\n");
		                        printf("\nMatriz 2");
		                        printf("\n\n");
		                        for(x=0; x<f2; x++) {
			                        printf("|");
			                        for(y=0; y<c2; y++) {
				                        printf("\%4d", m2[x][y]);
			                        }
			                        printf("|\n");
			                        printf("\n");
		                        }
		                        printf("\n\n");
		
		                   //Imprime resultado de multiplicacion
		                        printf("\nLa multiplicacion es: ");
		                        printf("\n\n");
	                            for(x=0; x<f1; x++) {
			                        printf("|");
			                        for(y=0; y<c2; y++) {
				                        printf("\%4d", m_Producto[x][y]);
			                        }
			                        printf("|\n");
			                        printf("\n");
		                        }
	                        }
	                        else {
		                        printf("\nNo se puede realizar la operacion.");
	                        }
	                        break;
					    }
					    case 4: {
						    	system("cls");
								break;
						}
						case 5: {
								break;
						}
						default: {
						    	printf("\nIngrese una opcion valida\n");
								break;
						}
				    }
				}while(matematicas!=5); 
			}
			break;
			case 3: {
				printf("\nCreditos\n");
				printf("\n\nNombre del grupo: F Society");
				printf("\nIntegrantes:      Yasmin Coto");
				printf("\n");
				break;
			}
			case 4: {
				system("cls");
				break;
			}
			case 5: {
				printf("\nGracias por usar el menu\n");
				system("PAUSE");
				break;
			}
			default: {
				printf("\nIngrese una opcion valida\n");
				break;
			}
		}
	}while(opcion!=5);
	return 0;
}

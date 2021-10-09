#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
																	/*HECHO POR LEANDRO BRITO CONTRERAS*/

void takingphrase();//tomando datos
void loking_for_word(char *,int&);//buscando palabras

char *phrase,phrase2[100];//cadena de caracteres para la frase
int tam2,q=0;//tamano de frase2

int main(){//main
	takingphrase();//pidiendo datos y traspasandolos a memoria dinamica
	loking_for_word(phrase,tam2);//buscando palabras
	
	//fin
	cout<<endl<<"\a";
	system("pause");
	return 0;
}//fin main

void takingphrase(){//tomando datos
	
	cout<<"put down the phrase: ";
	cin.getline(phrase2,100,'\n');//guardando frase2
	strupr(phrase2);//comvirtiendo a mayusculas fras2
	tam2=strlen(phrase2);//tamano de frase2
	phrase=new char[tam2];//cadena de caracteres dinamica frase
	strcpy(phrase,phrase2);//guardando frase2 en frase	
}

void loking_for_word(char *phrase,int& tam2){//buscando palabras

	int j=0,k=0,mitad;
//---------------------------------------------------------------------------------------------------------------------------------------------------
	//recorriendo la frase en busca de un espacio para tomar palabra por palabra
	
	for(int i=0;i<=tam2;i++){//inicio bucle
		if(*(phrase+i)==' '){//buscando los espacio en la frase
			k=i-1;//tomando una posicion antes del espacio encontrado
			if((j+k)%2==0){//si es par porque comienza desde 0
				mitad=((j+k)/2);//buscando mitad de la palabra encontrada y debajo estamos comparando
				if(*(phrase+j)=='A' || *(phrase+j)=='E' || *(phrase+j)=='I' || *(phrase+j)=='O' || *(phrase+j)=='U'){//comprobando primera posicion
					if(*(phrase+mitad)=='B' || *(phrase+mitad)=='C' || *(phrase+mitad)=='D' || *(phrase+mitad)=='F' || *(phrase+mitad)=='G' || *(phrase+mitad)=='H' || *(phrase+mitad)=='J' || *(phrase+mitad)=='K' || *(phrase+mitad)=='L' || *(phrase+mitad)=='M' || *(phrase+mitad)=='N' || *(phrase+mitad)=='P' || *(phrase+mitad)=='Q' || *(phrase+mitad)=='R' || *(phrase+mitad)=='S' || *(phrase+mitad)=='T' || *(phrase+mitad)=='V' || *(phrase+mitad)=='W' || *(phrase+mitad)=='X' || *(phrase+mitad)=='Y' || *(phrase+mitad)=='Z'){//comprobando pocision media
						if(*(phrase+k)=='A' || *(phrase+k)=='E' || *(phrase+k)=='I' || *(phrase+k)=='O' || *(phrase+k)=='U'){//comprobando ultima posicion
							cout<<"\n\tLas palabras son: ";
							for(int i=j;i<=k;i++){
								cout<<*(phrase+i);//mostrando la palabra que cumple con todas las posiciones 
							}
							cout<<" ";//dando espaciado para cada palabra
						}
					}
				}
			}
			j=i+1;//aumentando j para obtener la primera posicion de la siguiente palabra
		}
	}//fin bucle
	
	
//--------------------------------------------------------------------------------------------------------------------------------------------------
	//si la oracion no tiene un espacio siginifica que es una sola palabra
	
	for(int i=0;i<=tam2;i++){//inicio bucle
		if(*(phrase+i)=='\0'){//buscando el caracter nulo \0 en la frase
			k=i-1;//tomando una posicion antes del espacio encontrado
			if((j+k)%2==0){//si es par porque comienza desde 0
				mitad=((j+k)/2);//buscando mitad de la palabra encontrada y debajo estamos comparando
				if(*(phrase+j)=='A' || *(phrase+j)=='E' || *(phrase+j)=='I' || *(phrase+j)=='O' || *(phrase+j)=='U'){//comprobando primera posicion
					if(*(phrase+mitad)=='B' || *(phrase+mitad)=='C' || *(phrase+mitad)=='D' || *(phrase+mitad)=='F' || *(phrase+mitad)=='G' || *(phrase+mitad)=='H' || *(phrase+mitad)=='J' || *(phrase+mitad)=='K' || *(phrase+mitad)=='L' || *(phrase+mitad)=='M' || *(phrase+mitad)=='N' || *(phrase+mitad)=='P' || *(phrase+mitad)=='Q' || *(phrase+mitad)=='R' || *(phrase+mitad)=='S' || *(phrase+mitad)=='T' || *(phrase+mitad)=='V' || *(phrase+mitad)=='W' || *(phrase+mitad)=='X' || *(phrase+mitad)=='Y' || *(phrase+mitad)=='Z'){//comprobando pocision media
						if(*(phrase+k)=='A' || *(phrase+k)=='E' || *(phrase+k)=='I' || *(phrase+k)=='O' || *(phrase+k)=='U'){//comprobando ultima posicion
							cout<<"\n\tLas palabras son: ";
							for(int i=j;i<=k;i++){
								cout<<*(phrase+i);//mostrando la palabra que cumple con todas las posiciones 
							}
							cout<<" ";//dando espaciado para cada palabra
						}
					}
				}
			}
			j=i+1;//aumentando j para obtener la primera posicion de la siguiente palabra
		}
	}//fin bucle
}
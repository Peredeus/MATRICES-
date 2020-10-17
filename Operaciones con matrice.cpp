#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


int main(){
	srand(time(NULL));
	int  matriz1[100][100],filas1,columnas1;
	int  matriz2[100][100],filas2,columnas2;
	char suma='+',resta='-',multiplicacion='*',division='/';
	char operador;
	cout<<"Hola,escriba el numero de filas para su matriz1:"<<endl;
	cin>>filas1;
	cout<<"Escriba el numero de columnas:"<<endl;
	cin>>columnas1;
	
	for(int filag=0; filag<filas1; filag++)
	{
		for(int colg=0; colg<columnas1; colg++)
		{
			matriz1[filag][colg]= rand() % 100;
		cout<<"La matriz 1 generada es"<<matriz1<<endl;
		}
	}	
		cout<<"Hola,escriba el numero de filas para su matriz2:"<<endl;
	cin>>filas2;
	cout<<"Escriba el numero de columnas:"<<endl;
	cin>>columnas2;
	
	for(int filag1=0; filag1<filas1; filag1++)
	{
		for(int colg1=0; colg1<columnas1; colg1++)
		{
			matriz2[filag1][colg1]= rand() % 100;
		cout<<"La matriz 2 generada es"<<matriz2<<endl;
		}
	}			
	cout<<"Que operacion deseas ingresar(ingresa simbolo de operacion)"<<endl;
	cin>>operador;
	if(operador==suma) {
		int suma;
		suma=matriz1[filag][colg]+	matriz2[filag1][colg1];
		cout<<"La suma es:"<<suma<<endl;
	}
	if(operador==resta){
		int resta;
		resta=matriz1[filag][colg]-	matriz2[filag1][colg1];
		cout<<"La resta es:"<<resta<<endl;
		}
	if(operador==multiplicacion){
		int multiplicacion;
		multiplicacion=(matriz1[filag][colg])*(matriz2[filag1][colg1]);
		cout<<"La multiplicacion es:"<<multiplicacion<<endl;
		
		
		}
		return main;
	
	
}
